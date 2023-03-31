#include <stdio.h>

int main() {

    int Celsius, Fahrenheit;

    printf("Digite o valor em Celsius para ser convertido: ");
    scanf("%d", &Celsius);

    Fahrenheit = (9*Celsius+160)/5;

    printf("O valor em Fahrenheit é: %d°F", Fahrenheit);

    return 0;
}