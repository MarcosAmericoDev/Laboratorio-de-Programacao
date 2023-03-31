#include <stdio.h>

int main() {
    int Valor, Maior, Menor;

    puts("Digite um valor:");
    scanf("%d", &Valor);

    Maior = Valor;
    Menor = Valor;
    for (;;)
    {
        if (Valor == 0)
        {
            break;
        } else
        {
            if (Valor > Maior)
            {
                Maior = Valor;
            } else if (Valor < Menor)
            {
                Menor = Valor;
            }  
        }
        scanf("%d", &Valor);
    }
    
    printf("O maior e o menor valor, respectivamente, dos digitados foi: %d e %d", Maior, Menor);
    return 0;
}