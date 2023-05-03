#include <stdio.h>
#include <string.h>

#define TAM 40

int main(void) {
    
    char string[TAM], *p = string, caractere;

    // Entrada

    puts("Digite sua string: ");
    fgets(string, TAM, stdin);

    puts("Digite seu caractere que deseja buscar: ");
    scanf("%c", &caractere);

    // Processamento

    int i = 0;
    int caractereEncontrado = 0;

    while (*(p+i) != '\0')
    {   
        if (*(p+i) == caractere)
        {
            caractereEncontrado = 1;
        }
        
        i++;
    }
    
    // Saída

    if (caractereEncontrado)
    {
        puts("Há seu caractere na string!");
    }
    else
    {
        puts("Não há seu caractere na string");
    }
    
    return 0;
}