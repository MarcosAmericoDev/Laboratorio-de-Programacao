/* Escreva um programa que adicione dois números usando ponteiros. Além do valor da soma, 
imprima também o endereço de memória onde o valor resultante dessa soma está armazenado. */ 

#include <stdio.h>

int main(void) {
    
    // Entrada
    int n1, n2, soma;
    int *pN1 = &n1, *pN2 = &n2, *pSoma = &soma;

    puts("Digite o primeiro valor: ");
    scanf("%d", pN1);
    puts("Digite o segundo valor: ");
    scanf("%d", pN2);
    
    // Processamento
    *pSoma = *pN1 + *pN2;

    // Saída

    printf("[%p] soma: %d", pSoma, *pSoma);

    return 0;
}