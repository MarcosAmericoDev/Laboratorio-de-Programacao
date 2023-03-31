#include <stdio.h>
#include <math.h>

int main() {

    int CordX1, CordY1, CordX2, CordY2;
    float Distancia;

    printf("Digite o valor de x1: ");
    scanf("%d", &CordX1);
    printf("Digite o valor de x2: ");
    scanf("%d", &CordX2);
    printf("Digite o valor de y1: ");
    scanf("%d", &CordY1);
    printf("Digite o valor de y2: ");
    scanf("%d", &CordY2);

    Distancia = sqrt((CordX2 - CordX1)*(CordX2 - CordX1) + (CordY2 - CordY1)*(CordY2 - CordY1));

    printf("A distância entre os dois pontos é: %.2f", Distancia);

    return 0;
}