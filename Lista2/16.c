#include <stdio.h>

int main() {

    int i, somatorio_de_3 = 0, somatorio_de_5 = 0;

    for (i = 0; i <= 200; i++)
    {
        if ((i <= 100) && (i % 3 == 0))
        {
            somatorio_de_3 += i;
        }
        if ((i > 100) && (i % 5 == 0))
        {
            somatorio_de_5 += i;
        }
    }
    
    printf("A soma de todos os valores divisíveis por 3 entre 0 e 100 é: %d \n", somatorio_de_3);
    printf("A soma de todos os valores divisíveis por 5 entre 100 e 200 é: %d \n", somatorio_de_5);
    return 0;
}