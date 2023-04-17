/* Escreva um programa que troque o valor de dois números utilizando ponteiros. */

#include <stdio.h>

void imprimirPonteiros(int *p1, int *p2);
int main(void) {



    // Entrada

    int n1, n2;
    int *pN1 = &n1, *pN2 = &n2;

    puts("Digite o primeiro valor:");
    scanf("%d", pN1);
    puts("Digite o segundo valor:");
    scanf("%d", pN2);

    // Processamento
    puts("=========Antes da troca=======");
    imprimirPonteiros(pN1, pN2);

    *pN1 = *pN1 ^ *pN2;
    *pN2 = *pN1 ^ *pN2;
    *pN1 = *pN1 ^ *pN2;

    // Saída
    puts("========Depois da troca======");
    imprimirPonteiros(pN1, pN2);
    return 0;
}

void imprimirPonteiros(int *p1, int *p2){
    printf("[%p]: %d \n[%p]: %d\n", p1, *p1, p2, *p2);
}