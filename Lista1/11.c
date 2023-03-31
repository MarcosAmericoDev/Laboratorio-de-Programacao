#include <stdio.h>

int main() {

    float Cotacao, QuantidadeReais;

    printf("Digite a cotação do dólar: ");
    scanf("%f", &Cotacao);
    printf("Digite a quantidade de reais que deseja converter: ");
    scanf("%f", &QuantidadeReais);

    printf("Convertendo, você teria: US$%.2f", QuantidadeReais/Cotacao);
    
    return 0;
}