#include <stdio.h>

int main() {

    float ValorHoraAula, DescontoINSS, ValorBruto, ValorLiquido;
    int HorasTrabalhadas;

    printf("Digite a Hora/Aula do(a) professor(a): ");
    scanf("%f", &ValorHoraAula);
    printf("Digite a quantidade de horas trabalhadas no mês: ");
    scanf("%d", &HorasTrabalhadas);
    printf("Digite o valor o desconto do INSS (sem o sinal de porcentagem): ");
    scanf("%f", &DescontoINSS);

    ValorBruto = ValorHoraAula * HorasTrabalhadas;
    ValorLiquido = ValorBruto-ValorBruto*DescontoINSS/100;

    printf("O salário bruto do professor é R$%.2f e o salário líquido é R$%.2f", ValorBruto, ValorLiquido);

    return 0;
}