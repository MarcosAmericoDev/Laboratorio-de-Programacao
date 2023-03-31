#include <stdio.h>

int main() {
    int numero, DezenaDeMilhar, Milhar, Centena, Dezena, Unidade;
    int RestoDezenaDeMilhar, RestoMilhar, RestoCentena, ValorInvertido;

    printf("Digite o valor que deseja checar: ");
    scanf("%d", &numero);

    DezenaDeMilhar = numero / 10000;
    RestoDezenaDeMilhar = numero % 10000;
    Milhar = RestoDezenaDeMilhar / 1000;
    RestoMilhar = RestoDezenaDeMilhar % 1000;
    Centena = RestoMilhar / 100;
    RestoCentena = RestoMilhar % 100;
    Dezena = RestoCentena / 10;
    Unidade = RestoCentena % 10;

    ValorInvertido = Unidade * 10000 + Dezena * 1000 + Centena * 100 + Milhar * 10 + DezenaDeMilhar;

    if (ValorInvertido == numero) 
    {
    printf("Esse número é um palíndromo!");
    }
    else
    {
        printf("Esse número não é um palíndromo!");
    }

    return 0;
}