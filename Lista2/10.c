#include <stdio.h>

int main() {

    int i, quadrado;

    for (i = 15; i < 91; i++)
    {
        quadrado = i*i;

        if (i % 4 == 0)
        {
            printf("%d ", quadrado);
        } 
    }
    return 0;
} 