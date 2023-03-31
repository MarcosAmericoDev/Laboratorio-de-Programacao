#include <stdio.h>

int main() {

    int Fatorial (int valor);
    int numero, valorDoResultado;

    printf("Digite um valor: ");
    scanf("%d", &numero);
    valorDoResultado = Fatorial(numero);

    printf("O fatorial de %d é: %d", numero, valorDoResultado);

    return 0;
}

int Fatorial(int valor) {
    int ValorDoResultado;

    if (valor == 0)
    {
        ValorDoResultado = 1;
    }
    else
    {
        ValorDoResultado = valor * Fatorial(valor - 1);
    }

    return ValorDoResultado;
}
