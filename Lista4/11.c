#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define TAM 14
#define SFT 0
#define MAX 7

void imprimirVetor(int *p, int tamanho);
int main(void){
    int X[TAM], Y[TAM], Matriz[N*N], *pX = X, *pY = Y, *pM = Matriz; 

    srand(time(NULL));
    for (int i = 0; i < TAM; i++) *(pX + i) = rand() % MAX + SFT;
    for (int i = 0; i < TAM; i++) *(pY + i) = rand() % MAX + SFT;

    for (int i = 0; i < N*N; i++) *(pM + i) = 0;

    for (int i = 0; i < TAM; i++) *(pM + ((*(pY+i))*N + *(pX+i))) += 1;
    
    imprimirVetor(pX, TAM);
    puts("");
    imprimirVetor(pY, TAM);
    puts("");

    for (int i = 0; i < N*N; i++)
    {   
        if (!(i%N)) printf("\n");
        printf("%3d ", *(pM + i));
    }
}

void imprimirVetor(int *p, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%3d ", *(p+i));
    }
}