#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 255
#define SFT 0
#define NUMREC 5

struct Matriz
{
    int quantidade_linha;
    int quantidade_coluna;
    int **linhas;

};

void alocarMatrizPrincipal(struct Matriz *);
void gerarMatriz(struct Matriz);
void imprimirMatriz(struct Matriz);

int main(int argc, char **argv)
{   
    srand(time(NULL));

    if (argc != 3)
    {
        printf("\nUse: ./%s [qLin] [qCol]", *argv);
    }

    // Imagem Principal

    struct Matriz imagemPrincipal;
    struct Matriz *pImagemPrincipal = &imagemPrincipal;

    int qLin = atoi(*(argv+1));
    int qCol = atoi(*(argv+2));
    
    pImagemPrincipal->quantidade_coluna = qCol;
    pImagemPrincipal->quantidade_linha = qLin;

    alocarMatrizPrincipal(pImagemPrincipal);
    gerarMatriz(imagemPrincipal);
    imprimirMatriz(imagemPrincipal);

    // Recortes

    struct Matriz Recortes[NUMREC];

    int tamanhoRecorte = 3;

    for (int i = 0; i < NUMREC; i++)
    {
        Recortes[i].quantidade_coluna = tamanhoRecorte;
        Recortes[i].quantidade_linha = tamanhoRecorte;
    }

    for (int i = 0; i < NUMREC; i++)
    {
        Recortes[i].linhas = (int **) malloc(Recortes[i].quantidade_linha * sizeof(int));

        for (int j = 0; j < Recortes[i].quantidade_linha; j++)
        {
            Recortes[i].linhas[j] = malloc(Recortes[i].quantidade_coluna * sizeof(int));
        }
        
    }

    int xCentro;
    int yCentro;
    for (int i = 0; i < NUMREC; i++)
    {
        xCentro = (tamanhoRecorte/2) + rand() % ((pImagemPrincipal->quantidade_coluna)-(tamanhoRecorte/2));
        yCentro = (tamanhoRecorte/2) + rand() % ((pImagemPrincipal->quantidade_linha)-(tamanhoRecorte/2));

        for (int j = 0; j < Recortes[i].quantidade_linha; j++)
        {
            for (int k = 0; k < Recortes[i].quantidade_coluna; k++)
            {
                Recortes[i].linhas[j][k] = (pImagemPrincipal->linhas[yCentro-1+j][xCentro-1+k]);
            }
        }
    }
    

    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        imprimirMatriz(Recortes[i]);
        printf("\n");
    }
    
    

    return 0;
}

void alocarMatrizPrincipal(struct Matriz *m)
{
    m->linhas = (int **) malloc(m->quantidade_linha * sizeof(int));

    for (int i = 0; i < m->quantidade_linha; i++)
    {
        m->linhas[i] = malloc(m->quantidade_coluna * sizeof(int));
    }
}

void gerarMatriz(struct Matriz m) 
{   
    srand(time(NULL));

    for (int i = 0; i < m.quantidade_linha; i++)
    {
        for (int j = 0; j < m.quantidade_coluna; j++)
        {
            m.linhas[i][j] = rand()%MAX + SFT;
        }
    }
}

void imprimirMatriz(struct Matriz m)
{
    for (int i = 0; i < m.quantidade_linha; i++)
    {
        for (int j = 0; j < m.quantidade_coluna; j++)
        {
            printf("%4d ",  m.linhas[i][j]);
        }
        printf("\n");
    }
}