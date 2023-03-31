#include <stdio.h>
#include <math.h>

int main() {

    float num1, num2, num3, MedAri, MedGeo;


    printf("Digite o número 1: ");
    scanf("%f", &num1);
    printf("Digite o número 2: ");
    scanf("%f", &num2);
    printf("Digite o número 3: ");
    scanf("%f", &num3);

    MedAri = (num1 + num2 + num3)/3;
    MedGeo = pow((num1 + num2 + num3), (0.33));

    printf("A média aritmética e geométrica dos valores é, respectivamente: %.2f, %.2f", MedAri, MedGeo);
    return 0;
}