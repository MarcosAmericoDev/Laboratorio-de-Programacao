#include <stdio.h>

int main() {

    float Raio, Pi = 3.14159;

    printf("Digite o valor do raio: ");
    scanf("%f", &Raio);

    printf(" Valor do diâmetro: %.2f\n Valor da circunferência: %.2f\n Valor da área: %.2f", 2*Raio, 2*Raio*Pi, Pi*Raio*Raio);
    
    return 0;
}