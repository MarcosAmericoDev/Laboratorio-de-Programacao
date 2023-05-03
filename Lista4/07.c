#include <stdio.h>
#include <string.h>

#define TAM 40

int main(void) {

    char s1[TAM], s2[TAM], *pS1 = s1, *pS2 = s2;

    // Entrada

    puts("Digite as suas strings: ");
    fgets(s1, TAM, stdin);
    *(pS1 + strlen(pS1) - 1) = '\0'; // Acho que essa linha é POG
    fflush(stdin);
    fgets(s2, TAM, stdin);

    // Processamento
    strcat(pS1, pS2);

    // Saída

    puts(s1);

    return 0;
}