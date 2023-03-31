#include <stdio.h>

int main() {
    
    int numero, RestoDivCentena, RestoDivDezena, ValorInvertido;
    float inteiroDivCentena, inteiroDivDezena;

    printf("Digite o valor inteiro: ");
    scanf("%d", &numero);

    inteiroDivCentena = numero/100;
    RestoDivCentena = numero%100;
    inteiroDivDezena = RestoDivCentena/10;
    RestoDivDezena = RestoDivCentena%10;

    ValorInvertido = RestoDivDezena*100+inteiroDivDezena*10+inteiroDivCentena;

    printf("Valor invertido: %d \n", ValorInvertido);    

    return 0;
}