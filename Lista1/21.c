#include <stdio.h>

int main() {
    
    int primeiroValor, segundoValor;

    printf("Digite o primeiro valor: ");
    scanf("%d", &primeiroValor);

    printf("Digite o segundo valor: ");
    scanf("%d", &segundoValor);

    primeiroValor%segundoValor==0 ? printf("O primeiro valor é múltiplo do segundo") : printf("O primeiro valor não é múltiplo do segundo");
    return 0;
}