#include <stdio.h>
#include <string.h>

#define TAM 40

int main(void) {

    char string[TAM], *p = string, i = 0;
    int tamanhoString = -1;

    // Entrada

    puts("Digite sua string: ");
    fgets(string, TAM, stdin);

    // Processamento

    while (*(p+i) != '\0') // m a r c o s 
    {
        tamanhoString++;
        i++;
    }

    // Saída

    printf("tamanho da string: %d", tamanhoString);

    return 0;
}