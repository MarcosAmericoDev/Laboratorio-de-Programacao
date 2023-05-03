#include <stdio.h>
#include <string.h>

#define TAM 40

int main(void) {

    char s1[TAM], s2[TAM], *pS1 = s1, *pS2 = s2;

    // Entrada

    puts("Digite a sua string: ");
    fgets(s1, TAM, stdin);

    // Processamento
    strcpy(pS2, pS1);
    *(pS2 + strlen(s1)) = '\0';
    
    // Saída

    puts(s2);

    return 0;
}