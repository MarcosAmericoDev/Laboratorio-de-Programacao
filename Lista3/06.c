#include <stdio.h>
#include <string.h>
// para strings de 7 caracteres.
#define TAM 9
int main(void) {
    
    // Entrada de dados

    char string[TAM];
    puts("Digite a string que deseja inverter: ");
    fgets(string, TAM, stdin);

    // Processamento

    char copiaString[TAM];
    strcpy(copiaString, string);

    
    for (int i = 0; i < TAM; i++)
    {
        string[i] = copiaString[TAM-i-2]; // tem que colocar -2 para não pegar o caracter de finalização \0
    }
    
    
    // Saída
    
    printf("string invertida: %s", string);

    return 0;
}