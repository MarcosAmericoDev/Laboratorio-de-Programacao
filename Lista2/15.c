#include <stdio.h>
#include <math.h>

int main() {
    int i, base = 3, resultado;


    for (i = 0; i <= 7; i++)
    {
        resultado = pow(base, i);
        printf("%d elevado a %d é igual a: %d \n", base, i, resultado);
    }
    
    return 0;
}