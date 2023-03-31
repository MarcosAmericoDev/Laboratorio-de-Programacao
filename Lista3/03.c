#include <stdio.h>
#include <string.h>

#define TAM 20

int main(void) {

    // Entrada
    char string[TAM];

    puts("Digite a string a baixo: ");
    fgets(string, TAM, stdin);

    // Processamento

    int tamanho = 0;
    int i = 0;
    while (string[i] != '\0') {
        if (string[i+1] == '\0') break;
        tamanho++;
        i++;
    }
    // Saída

    puts("--------------");
    printf("Tamanho da string: %d caracteres", tamanho);

    return 0;
}