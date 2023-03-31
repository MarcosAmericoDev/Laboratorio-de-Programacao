#include <stdio.h>

int main() {

    int valor_inicial, valor_final, i, soma = 0;
    float media_aritmetica; 

    printf("Insira o valor inicial: ");
    scanf("%d", &valor_inicial);
    printf("Insira o valor final: ");
    scanf("%d", &valor_final);

    for (i = valor_inicial; i <= valor_final; i++)
    {
        soma += i;
    }

    media_aritmetica = (float) soma/(valor_final - valor_inicial + 1);

    printf("A média aritmética entre os valores %d e %d é: %.2f", valor_inicial, valor_final, media_aritmetica);
    

    return 0;
}