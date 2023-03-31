#include <stdio.h>

int main() {
    int X;

    printf("Digite um valor inteiro: ");
    scanf("%d", &X);

    printf(" O triplo do valor: %d \n O quadruplo do valor: %d \n A metade: %.2f", 3*X, 4*X, X*0.5);

    return 0;
}