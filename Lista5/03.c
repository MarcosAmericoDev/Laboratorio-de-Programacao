#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Escreva um programa em C que informe o endereço do menor elemento de um vetor de inteiros
// gerado. A quantidade de elementos desse array deve ser fornecido por linha de comando.

#define MAX 99
#define SFT 0

void preenchimentoDeArray(int *, int, int, int);
void mostrarVetor(int *, int);
void MaiorMenor(int *, int);

int main(int argc, char **argv)
{
    // Validação

    if (argc != 2)
    {
        printf("Use: ./[CodProg] [QuantElem]");
        exit(1);
    }

    int quantElem = atoi(*(argv+1));
    int *pArray = NULL; 
    pArray = malloc(quantElem * sizeof(int));

    preenchimentoDeArray(pArray, MAX, SFT, quantElem);
    mostrarVetor(pArray, quantElem);
    printf("\n");
    MaiorMenor(pArray, quantElem);

    return 0;
}

void preenchimentoDeArray(int *p, int ValorMaximo, int ValorMinimo, int tamanhoDoArray)
{
    srand(time(NULL));
    for (int i = 0; i < tamanhoDoArray; i++)
    {
        *(p+i) = rand()%MAX + SFT;
    }
    
}

void mostrarVetor(int *p, int tamanhoDoArray)
{
    for (int i = 0; i < tamanhoDoArray; i++) printf("%4d ", *(p+i));
}

void MaiorMenor(int *p, int tamanhoDoArray) 
{  
    int vetorMaiorMenor[2];
    int *pVet = vetorMaiorMenor;
    int menorValor = *p;
    int maiorValor = *p;

    for (int i = 0; i < tamanhoDoArray; i++)
    {
        if (*(p+i) < menorValor) menorValor = *(p+i);
        if (*(p+i) > maiorValor) maiorValor = *(p+i);
        
    }

    *pVet = menorValor;
    *(pVet+1) = maiorValor;

    printf("Maior valor: %d \nMenorValor: %d \n", maiorValor, menorValor);
}