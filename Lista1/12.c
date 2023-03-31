#include <stdio.h>

int main(){
    int SegundoValor, PrimeiroValor, Resto;
    float Quociente;

    printf("Digite o primeiro valor: ");
    scanf("%d", &PrimeiroValor);
    printf("Digite o segundo valor: ");
    scanf("%d", &SegundoValor);

    Quociente = PrimeiroValor/SegundoValor;
    Resto = PrimeiroValor%SegundoValor;

    printf(" Dos dois valores...\n a soma: %d\n a diferença: %d\n o produto: %d\n o quociente: %.1f\n o resto: %d", PrimeiroValor+SegundoValor, PrimeiroValor-SegundoValor, PrimeiroValor*SegundoValor, Quociente, Resto);

    return 0;
}