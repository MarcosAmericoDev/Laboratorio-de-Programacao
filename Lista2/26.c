#include <stdio.h>

int valor_em_binario(int valor);
int main() {
    int valorBin = 0;
    for (int i = 1; i <= 256; i++)
    {
        printf("Decimal: %d / Hexadecimal: %X / Octal: %o / Binário: ", i, i ,i);
        valor_em_binario(i);
        puts("");

    }
    
    return 0;
}

int valor_em_binario(int valor){
    if (valor == 0)
    {
        printf("%d", valor);
    }
    else
    {
        valor_em_binario(valor/2);
        printf("%d", valor%2);
    }
    
}