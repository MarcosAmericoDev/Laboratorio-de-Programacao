#include <stdio.h>
#include <string.h>

#define TAM 100

int main(void){

    // Entrada de dados

    char s1[TAM], s2[TAM], concatenado[2*TAM];
    puts("Digite a primeira string: ");
    fgets(s1, TAM, stdin);
    
    s1[strlen(s1)-1] = '\0'; // para retirar o \n do buffer que fazia pular a linha entre o s1 e o s2.

    puts("Digite a segunda string: ");
    fgets(s2, TAM, stdin);

    // Processamento
    
    int i = 0, j = 0;

    while (s1[i] != '\0')
    {
        concatenado[i] = s1[i];
        i++;
    }

    while (s2[j] != '\0')
    {
        concatenado[i] = s2[j];
        i++;
        j++;
    }
    
    // Saída de dados

    printf("string concatenada: %s", concatenado);
    

    return 0;
}