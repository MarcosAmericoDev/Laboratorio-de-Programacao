#include <stdio.h>

int main() {
    float altura, comprimento, largura;

    printf("Digite a altura do retângulo:");
    scanf("%f", &altura);

    printf("Digite a comprimento do retângulo:");
    scanf("%f", &comprimento);

    printf("Digite a largura do retângulo:");
    scanf("%f", &largura);

    printf("O volume do retângulo é: %f", altura*comprimento*largura);

    return 0;
}