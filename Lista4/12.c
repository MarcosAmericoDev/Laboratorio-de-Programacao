#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define TAM 14
#define SFT 0
#define SFTR 1
#define MAX 7
#define MAXR 10

void imprimirVetor(int *p, int tamanho);
int main(void){
    int X[TAM], Y[TAM], Matriz[N*N], *pX = X, *pY = Y, *pM = Matriz, r; 

    srand(time(NULL));
    for (int i = 0; i < TAM; i++) *(pX + i) = rand() % MAX + SFT;
    for (int i = 0; i < TAM; i++)
    {
        r = rand() % MAXR + SFTR;
        if (r > 0 && r <= 3) *(pY+i) = *(pX+i);
        else if (r > 3 && r <= 5) *(pY+i) = *(pX+i) - 1;
        else if (r > 5 && r <= 7) *(pY+i) = *(pX+i) + 1;
        else if (r > 7 && r <= 9) *(pY+i) = *(pX+i) - 2;
        else if (r > 9 && r <= 10) *(pY+i) = *(pX+i) + 2;
    }

    imprimirVetor(pX, TAM);
    puts("");
    imprimirVetor(pY, TAM);
    puts("");

    for (int i = 0; i < N*N; i++) *(pM + i) = 0;

    for (int i = 0; i < TAM; i++) *(pM + ((*(pY+i))*N + *(pX+i))) += 1;

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