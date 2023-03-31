#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15
#define MAX 30
#define SFT 0

int main(void) {
    srand(time(NULL));

    // Entrada
    int vet[TAM];
    for (int i = 0; i < TAM; i++) vet[i] = SFT+ rand() % MAX;
    // Processamento
    int maior = vet[0], menor = vet[0];

    for (int i = 0; i < TAM; i++)
    {
        if (vet[i] > maior) maior = vet[i];
        if (vet[i] < menor) menor = vet[i];
    }
    
    int soma = maior + menor;
    
    // Saída
    for (int i = 0; i < TAM; i++) printf("%4d", vet[i]);
    puts("");
    puts("-------------");
    printf("soma do maior (%d) e o menor (%d): %d", maior, menor, soma);
    

    return 0;
}