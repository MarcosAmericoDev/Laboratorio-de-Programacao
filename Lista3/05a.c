#include <stdio.h>
#include <string.h>

#define TAM 100

int main(void){

    // Entrada de dados

    char s1[TAM], s2[TAM];
    puts("Digite a primeira string: ");
    fgets(s1, TAM, stdin);
    
    s1[strlen(s1)-1] = '\0'; // para retirar o \n do buffer que fazia pular a linha entre o s1 e o s2.

    puts("Digite a segunda string: ");
    fgets(s2, TAM, stdin);

    // Processamento
    
    strcat(s1,s2);

    // Saída de dados

    printf("string concatenada: %s", s1);
    

    return 0;
}