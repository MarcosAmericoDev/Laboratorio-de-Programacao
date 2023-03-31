#include <stdio.h>

int main() {

    int valor, menor_valor = 0, maior_valor = 0;

    while (1)
    {
        printf("Digite o valor: ");
        scanf("%d", &valor);

        if(!maior_valor && !menor_valor) 
        {
            menor_valor = valor;
            maior_valor = valor;
        }
        else if (valor > maior_valor)
        {
            maior_valor = valor;
        }
        else if (valor < menor_valor)
        {
            menor_valor = valor;
        }
        if (valor < 0 && !(valor%2))
        {
            break;
        }
    }
    printf("O menor valor é: %d \n", menor_valor);
    printf("O maior valor é: %d \n", maior_valor);
    
    return 0;
}