#include <stdio.h>

int main() {

    int i, A, B, somatorio = 0;

    printf("Digite o valor de entrada A: ");
    scanf("%d", &A);
    printf("Digite o valor de entrada B: ");
    scanf("%d", &B);


    if (A < B)
    {
        for (i = A; i <= B; i++)
        {
            if (i % 2 == 0)
            {
                somatorio += i;
            }
        }
    } 
    else
    {
        for (i = B; i <= A; i++)
        {
            if (i % 2 == 0)
            {
                somatorio += i;
            }  
        }
    }
    
    printf("A soma dos valores pares é: %d", somatorio);
    
    return 0;
}