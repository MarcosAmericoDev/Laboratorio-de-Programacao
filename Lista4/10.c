#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define TAM 20
#define SFT 0
#define MAX 7

void imprimirVetor(int *p, int tamanho);
int main(void){

    srand(time(NULL));
    int vet[TAM], freq[N], *pVet = vet, *pFreq = freq;

    for (int i = 0; i < TAM; i++) *(pVet+i) = SFT + rand() % MAX;
    
    for (int i = 0; i < N; i++) *(pFreq+i) = 0;
        
    for (int i = 0; i < TAM; i++)
    {
        *(pFreq + *(pVet+i)) += 1;
    }
    
    
    imprimirVetor(pVet, 20);
    printf("\n");
    imprimirVetor(pFreq, 7);

    return 0;
}

void imprimirVetor(int *p, int tamanho) {

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", *(p+i));
    }
    
}