/*Escreva um programa que solicite iterativamente um número do usuário e imprima sempre o 
menor valor fornecido. Crie um critério para finalização do programa. Utilize ponteiros.*/

#include <stdio.h>

int main(void) {

    // Entrada

    int numero = 0, menor = 0;
    int *pN = &numero;

    if (menor == 0)
    {
        puts("Digite um valor (irá parar com um número negativo): ");
        scanf("%d", pN);
        menor = *pN;
    }
    
    while (numero >= 0)
    {
        if (menor > *pN)
        {
            menor = *pN;
        }

        puts("Digite um valor: ");
        scanf("%d", pN);
        
    }
    
    // Saída

    printf("O menor valor foi: %d", menor);

    return 0;
}