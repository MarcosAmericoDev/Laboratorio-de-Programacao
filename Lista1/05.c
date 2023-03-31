#include <stdio.h>

int main(){

    float ValorConta;

    printf("Insira aqui da conta: R$");
    scanf("%f", &ValorConta);
    printf("O valor total a pagar (com a taxa do garçom): R$%.2f", ValorConta*1.1);
    return 0;
}