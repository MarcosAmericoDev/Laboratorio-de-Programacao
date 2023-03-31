#include <stdio.h>

int main() {
    int valor;

    puts("Digite o valor de X: ");
    scanf("%d", &valor);

    printf("Hexadecimal: %X \n", valor);
    printf("Octal: %o \n", valor);
    return 0;
}