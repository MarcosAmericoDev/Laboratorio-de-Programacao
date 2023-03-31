#include <stdio.h>

int main() {

    int i, quadrado, valor_inicial, valor_final;

    printf("Insira o valor que deseja iniciar: ");
    scanf("%d", &valor_inicial);
    printf("Insira o valor que deseja terminar: ");
    scanf("%d", &valor_final);

    if (valor_inicial < valor_final)
    {
        for (i = valor_inicial; i <= valor_final; i++)
        {
            quadrado = i*i;

            if (i % 4 == 0)
            {
                printf("%d ", quadrado);
            } 
        }
    }
    else
    {
        for (i = valor_final; i <= valor_inicial; i++)
        {
            quadrado = i*i;

            if (i % 4 == 0)
            {
                printf("%d ", quadrado);
            } 
        }
    }
    
    
    return 0;
} 