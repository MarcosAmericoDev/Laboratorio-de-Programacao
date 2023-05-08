#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define TAM 14
#define SFT 0
#define MAX 7

// Tentativa de fazer a questão 11 utilizando alocação dinâmica;
void imprimirVetor(int *p, int tamanho);
int main(void){
    int X[TAM], Y[TAM], **Matriz = NULL, *pX = X, *pY = Y, lin, col; 


    srand(time(NULL));
    

    puts("Digite o número de linhas: ");
    scanf("%d", &lin);

    puts("Digite o número de colunas: ");
    scanf("%d", &col);

    for (int i = 0; i < TAM; i++) *(pX + i) = rand() % MAX + SFT;
    for (int i = 0; i < TAM; i++) *(pY + i) = rand() % MAX + SFT;

    Matriz = (int **) malloc(lin * sizeof(int *));

    for (int i = 0; i < lin; i++) *(Matriz + i) = malloc(col * sizeof(int));
    
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            *(*(Matriz+i) + j) = 0;
        }
        
    }

    imprimirVetor(pX, TAM);
    puts("");
    imprimirVetor(pY, TAM);
    puts("");
    puts("");
    
    for (int i = 0; i < TAM; i++)
    {
        *(*(Matriz + *(pY+i)) + *(pX + i)) += 1;
    }
    
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3d", *(*(Matriz+i)+j));
        }
        printf("\n");
    }
    
    free(Matriz);
    
}

void imprimirVetor(int *p, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%3d ", *(p+i));
    }
}