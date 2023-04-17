/*  Escreva um programa que leia um vetor do usuário e imprima seus valores e seus endereços. 
Teste o vetor com tipos de dados diferentes, analise os endereços. O que você observou?  */

#include <stdio.h>

#define TAM 5
int main(void) {

    // Entrada de dados

    int vet[TAM];
    int *p = vet;

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite um valor [%d]: \n", i+1);
        scanf("%d", p+i);
    }

    // Processamento

    // Saída de dados
    
    for (int i = 0; i < TAM; i++)
    {
        printf("[%p] %d\n", p+i, *(p+i));
    }
    

    /* o que foi observado: dependendo do tipo primitivo colocado na nomento da declaração do vetor e do ponteiro, muda quantos bits na memória
    vai ocupar.
    
    Exemplo: ao ser colocado como inteiro, os endereços são sequenciais de 4 em 4 bytes, se for como caractere, de 1 em 1 e, se for como
    double, de 8 em 8 bytes*/
    return 0;
}


