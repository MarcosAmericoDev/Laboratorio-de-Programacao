#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que receba dois valores por linha de execução e realize a soma ou
// multiplicação conforme um código de operação também recebido por linha de execução.

int operacao(int, int, int);
int main(int argc, char **argv)
{
    if (argc != 4)
    {
        printf("Use: ./%s [Primeiro valor] [Segundo valor] [Código da operação]", *argv);
        exit(1);
    }

    int primValor = atoi(*(argv+1));
    int segValor = atoi(*(argv+2));
    int cod = atoi(*(argv+3));

    int resultado = operacao(primValor, segValor, cod);

    printf("O seu resultado é: %d", resultado);

    return 0;
}

int operacao(int v1, int v2, int codigo)
{
    if (codigo == 1)
    {
        return v1+v2;
    }
    else if (codigo == 2)
    {
        return v1*v2;
    }
    else
    {
        puts("Código inválido");
        exit(1);
    }
}