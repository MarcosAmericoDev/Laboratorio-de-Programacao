#include <stdio.h>

// Escreva um programa que mostre a diferença entre pré-incrementar e pós-incrementar usando o operador –.
int main() {

    int valor = 5;

    printf("Valor antes dos incrementos: %d \n\n", valor);

    printf("Exemplo com o - como pré-incremento: %d \n", --valor);
    printf("Exemplo com o - como pós-incremento: %d \n", valor--);
    printf("valor atual após os incrementos: %d \n", valor);
    return 0;
}