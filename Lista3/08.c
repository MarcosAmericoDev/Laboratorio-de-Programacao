#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main(void) {

    int vetor[TAM];
    srand(time(NULL));

    // Entrada de dados
    int max, sft;
    
    printf("Digite o mínimo do intervalo: ");
    scanf("%d", &sft);
    printf("Digite o máximo do intervalo: ");
    scanf("%d", &max);

    for (int i = 0; i < TAM; i++)
    {
        vetor[i] = sft + rand() % (max-sft);
    }

    // Processamento

    /* for (int i = 0; i < TAM-1; i++)           ORDENAÇÃO POR SELECAÇÃO
    {
        for (int j = i+1; j < TAM; j++)
        {
            if (vetor[i] > vetor[j])
            {
                vetor[i] = vetor[i] ^ vetor[j];
                vetor[j] = vetor[i] ^ vetor[j];
                vetor[i] = vetor[i] ^ vetor[j];
            }
        }
    } */

     for (int i = 0; i < TAM-1; i++)           // ORDENAÇÃO POR BOLHA
    {
        for (int j = 0; j < TAM-1; j++)
        {
            if (vetor[j] > vetor[j+1])
            {
                vetor[j] = vetor[j] ^ vetor[j+1];
                vetor[j+1] = vetor[j] ^ vetor[j+1];
                vetor[j] = vetor[j] ^ vetor[j+1];
            }
        }
    } 
    
    // Saída

    for (int i = 0; i < TAM; i++)
    {
        printf("%4d", vetor[i]);
    }
    
    return 0;
}