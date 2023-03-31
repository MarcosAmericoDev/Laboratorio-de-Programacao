#include <stdio.h>

int main() {
    float ValorPorDia = 50.25, ValorBruto;
    int DiasTrabalhados;

    printf("Digite quantos dias trabalhou: ");
    scanf("%d", &DiasTrabalhados);

    ValorBruto = DiasTrabalhados*ValorPorDia;

    if (DiasTrabalhados > 20)
    {
        ValorBruto *= 1.30;
    } else if ((DiasTrabalhados <= 20) && (DiasTrabalhados > 10))
    {
        ValorBruto *= 1.20;
    } 
    
    printf("O valor líquido final é: R$%.2f", ValorBruto*0.9);
    
    return 0;
}