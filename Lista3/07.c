#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 3
#define MAX 19
#define SFT 0

int main(void) {
    srand(time(NULL));
    int vetor[TAM];
    
    // Entrada de dados

    for (int i = 0; i < TAM; i++)
    {
        vetor[i] = SFT + rand() % MAX;
    }
    
    // Processamento

    double media_geometrica = 1;
    float media_aritmetica = 0;

    for (int i = 0; i < TAM; i++)
    {
        media_aritmetica += ((float)vetor[i])/3;
        media_geometrica *= pow((double)vetor[i], 1/((double)TAM));
    }


    // Saída de dados
    for (int i = 0; i < TAM; i++)
    {
        printf("%4d", vetor[i]);
    }
    puts("");

    puts("---------------");
    printf("Média aritmética: %.2f \n Média geométrica: %.2lf", media_aritmetica, media_geometrica);

    return 0;
}