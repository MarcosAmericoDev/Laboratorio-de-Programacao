#include <stdio.h>
#include <string.h>

#define TAM 10
int main(void){

    // Entrada de dados

    char string[TAM];
    char caractere;

    puts("Digite a string que deseja analisar e o caractere, respectivamente: ");
    fgets(string, TAM, stdin);
    fflush(stdin);
    scanf("%c", &caractere);

    // Processamento
    int k = 0;
    int contem = 0;
    while (string[k] != '\0')
    {
        if (string[k] == caractere)
        {
            contem = 1;
        }
        k++;
    }

    // Saída

    if (contem)
    {
        puts("Na string, há o caractere!");
    }
    else
    {
        puts("Na string, não há o caractere!");
    }

    return 0;
}