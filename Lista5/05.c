#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Escreva um programa que some todos os elementos de um vetor de float alocado dinamicamente.
// A quantidade de elementos devem ser fornecidas por linha de comando. Utilize a função rand()
// para alimentar o vetor com valores pseudo-aleatórios.

#define MAX 99
#define SFT 0

void preencherVetor(int *, int, int, int);
float somaElementos(int *, int);
void mostrarVetor(int *, int);

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Use: ./[CodProg] [QuantElem]");
        exit(1);
    }

    int quantElementos = atoi(*(argv+1));
    int *p = NULL;
    p = malloc(quantElementos * sizeof(int));

    preencherVetor(p, MAX, SFT, quantElementos);
    mostrarVetor(p, quantElementos);
    float soma = somaElementos(p, quantElementos);
    printf("\n");
    printf("A soma dos valores é: %.2f", soma);

}

void preencherVetor(int *p, int ValorMaximo, int ValorMinimo, int tamanho)
{
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++)
    {
        *(p+i) = rand()%MAX + SFT;
    }
    
}

void mostrarVetor(int *p, int tamanho)
{
    for (int i = 0; i < tamanho; i++) printf("%4d ", *(p+i));
}

float somaElementos(int *p, int tamanho)
{
    float resultado = 0;

    for (int i = 0; i < tamanho; i++)
    {
        resultado += *(p+i);
    }
    
    return resultado;
}