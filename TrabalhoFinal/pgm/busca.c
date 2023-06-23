#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <math.h>
#include <time.h>

#define QTDIMG 100
#define MAX_FILENAME_LENGTH 100

struct pgm {
    int tipo;
    int colunas;
    int linhas;
    int maxvalue;
    unsigned char **pData;
};

void readPGMImage(struct pgm *, char *);
double calculateMSE(struct pgm *, struct pgm *);
void saveCoordinatesToFile(char *, int, int);
void searchSubImages(char *, char *);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Formato: %s <diretorio_sub_imagens> <imagem_principal>\n", argv[0]);
        exit(1);
    }

    char *subImagesDir = argv[1];
    char *mainImage = argv[2];

    clock_t begin = clock();
    searchSubImages(subImagesDir, mainImage);
    clock_t end = clock();

    double time_total = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo Total: %lf segundos\n", time_total);

    return 0;
}

void searchSubImages(char *subImagesDir, char *mainImage) {
    DIR *d;
    struct dirent *dir;
    d = opendir(subImagesDir);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            if (strcmp(dir->d_name, ".") != 0 && strcmp(dir->d_name, "..") != 0) {
                char subImageFilePath[MAX_FILENAME_LENGTH];
                snprintf(subImageFilePath, sizeof(subImageFilePath), "%s/%s", subImagesDir, dir->d_name);
                
                struct pgm subImage;
                struct pgm mainImg;
                
                readPGMImage(&subImage, subImageFilePath);
                readPGMImage(&mainImg, mainImage);
                
                int subImgWidth = subImage.colunas;
                int subImgHeight = subImage.linhas;
                
                double lowestMSE = INFINITY;
                int bestMatchX = 0;
                int bestMatchY = 0;
                
                for (int i = 0; i <= mainImg.linhas - subImgHeight; i++) {
                    for (int j = 0; j <= mainImg.colunas - subImgWidth; j++) {
                        struct pgm subImageRegion;
                        subImageRegion.colunas = subImgWidth;
                        subImageRegion.linhas = subImgHeight;
                        subImageRegion.pData = (unsigned char **)malloc(subImgHeight * sizeof(unsigned char *));
                        for (int k = 0; k < subImgHeight; k++) {
                            subImageRegion.pData[k] = malloc(subImgWidth * sizeof(unsigned char));
                        }
                        
                        for (int k = 0; k < subImgHeight; k++) {
                            for (int l = 0; l < subImgWidth; l++) {
                                subImageRegion.pData[k][l] = mainImg.pData[i+k][j+l];
                            }
                        }
                        
                        double mse = calculateMSE(&subImage, &subImageRegion);
                        
                        if (mse < lowestMSE) {
                            lowestMSE = mse;
                            bestMatchX = j;
                            bestMatchY = i;
                        }
                        
                        for (int k = 0; k < subImgHeight; k++) {
                            free(subImageRegion.pData[k]);
                        }
                        free(subImageRegion.pData);
                    }
                }
                
                saveCoordinatesToFile(dir->d_name, bestMatchX, bestMatchY);
                
                for (int i = 0; i < subImage.linhas; i++) {
                    free(subImage.pData[i]);
                }
                free(subImage.pData);
                
                for (int i = 0; i < mainImg.linhas; i++) {
                    free(mainImg.pData[i]);
                }
                free(mainImg.pData);
            }
        }
        closedir(d);
    }
}

void readPGMImage(struct pgm *img, char *filename) {
    FILE *file;
    int i, j;

    file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(1);
    }

    fscanf(file, "P%d\n", &(img->tipo));
    fscanf(file, "%d %d\n", &(img->colunas), &(img->linhas));
    fscanf(file, "%d\n", &(img->maxvalue));

    img->pData = (unsigned char **)malloc(img->linhas * sizeof(unsigned char *));
    for (i = 0; i < img->linhas; i++) {
        img->pData[i] = (unsigned char *)malloc(img->colunas * sizeof(unsigned char));
    }

    for (i = 0; i < img->linhas; i++) {
        for (j = 0; j < img->colunas; j++) {
            img->pData[i][j] = (unsigned char)fgetc(file);
        }
    }

    fclose(file);
}

double calculateMSE(struct pgm *img1, struct pgm *img2) {
    double mse = 0;
    int i, j;
    int diff;

    for (i = 0; i < img1->linhas; i++) {
        for (j = 0; j < img1->colunas; j++) {
            diff = img1->pData[i][j] - img2->pData[i][j];
            mse += diff * diff;
        }
    }

    mse /= (img1->linhas * img1->colunas);

    return mse;
}

void saveCoordinatesToFile(char *subImageName, int coordX, int coordY) {
    FILE *file = fopen("coordinates.txt", "a");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(1);
    }

    fprintf(file, "%s, %d, %d\n", subImageName, coordX, coordY);
    
    fclose(file);
}
