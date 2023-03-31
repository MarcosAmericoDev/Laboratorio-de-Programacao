#include <stdio.h>

int main() {
    
    int A, B, Temp;

    printf("Insira o valor de A: ");
    scanf("%d", &A);

    printf("Insira o valor de B: ");
    scanf("%d", &B);
    
    Temp = A;
    A = B;
    B = Temp;

    printf("O valor de A e B agora são, respectivamente: %d e %d", A, B);
    return 0;
}