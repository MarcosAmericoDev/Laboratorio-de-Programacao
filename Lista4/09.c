#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MAX 15
#define SFT 0

void imprimirVetor(int *p, int tamanho);
int main(void) {

    srand(time(NULL));

    int vet[TAM], *p = vet;

    // Preenchendo o vetor

    for (int i = 0; i < TAM; i++) *(p+i) = rand() % MAX + SFT;
    
    // Processamento

    imprimirVetor(p, TAM);

    int aux;
    for (int i = 1; i < TAM; i++)
    {
        for (int j = 0; j < TAM-1; j++)
        {
            if (*(p+j) > *(p+j+1))
            {
                *(p+j) = *(p+j) ^ *(p+j+1);
                *(p+j+1) = *(p+j+1) ^ *(p+j);
                *(p+j) = *(p+j) ^ *(p+j+1);
            }
        }
    }

    printf("\n \n");
    imprimirVetor(p, TAM);


    return 0;
}

void imprimirVetor(int *p, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%3d ", *(p+i));
    }
}