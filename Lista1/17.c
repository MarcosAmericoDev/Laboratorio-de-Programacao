#include <stdio.h>
#include <stdlib.h>

int main() {
    signed int valor;

    printf("Digite o número: ");
    scanf("%d", &valor);

    printf("O valor absoluto (módulo) do valor %d é: %d", valor, abs(valor));

    return 0;
}