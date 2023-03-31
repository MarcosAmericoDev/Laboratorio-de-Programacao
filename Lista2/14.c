#include <stdio.h>

int main() {
    int i, A, B, quantidade_de_divisiveis = 0;

    // Entrada
    printf("Insira o valor de A: ");
    scanf("%d", &A);
    printf("Insira o valor de B: ");
    scanf("%d", &B);

    // Processamento
    if (A < B)
    {
        for (i = A; i <= B; i++)
        {
            if(i % 3 == 0)
            {
                quantidade_de_divisiveis++;
            }
        }  
    }
    else
    {
        for (i = B; i <= A; i++)
        {
            if(i % 3 == 0)
            {
                quantidade_de_divisiveis++;
            }
        }
    }
    
    // Saída
    printf("A quantidade de divisíveis de 3 é: %d", quantidade_de_divisiveis);

    return 0;
}