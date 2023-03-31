#include <stdio.h>

int main() {
    
    int fatorial(int valor), i;

    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d! = %d \n", i, fatorial(i));
        }
        
    }
    
    return 0;
}

int fatorial(int valor) {

    int valor_resultado;

    if (valor == 0)
    {
        valor_resultado = 1;
    }
    else
    {
        valor_resultado = valor * fatorial(valor - 1);
    }
    
    return valor_resultado;
}