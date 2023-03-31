#include <stdio.h>

int main() {
    float numero1, numero2, divisao;

    printf("Digite o primeiro valor: ");
    scanf("%f", &numero1);

    for(;;)
    {
        printf("Digite o segundo valor: ");
        scanf("%f", &numero2);

        if (numero2 != 0)
        {
            break;
        }
    }

    divisao = numero1/numero2;

    printf("O valor da divisão é: %.2f", divisao);

    return 0;
}