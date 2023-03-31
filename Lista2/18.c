#include <stdio.h>
#include <math.h>

int main() {

    float i;
    float somatorio = 0;

    for (i = 0; i < 64; i++)
    {
        somatorio += powf(2, i);
    }
    
    printf("O somatório: %.0f", somatorio);
    return 0;
}