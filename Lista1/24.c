#include <stdio.h>

int main() {
    int ValordeX, Expoente, resultado;

    printf("Digite o valor de x: ");
    scanf("%d", &ValordeX);
    printf("Digite o valor de n: ");
    scanf("%d", &Expoente);

    resultado = ValordeX << Expoente;
    
    printf("O produto de %d por 2 elevado a %d é igual a: %d\n", ValordeX, Expoente, resultado);

    return 0;
}
