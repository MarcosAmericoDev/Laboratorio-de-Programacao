#include <stdio.h>

int main (){
    int inteiro;

    puts("Digite o valor inteiro: ");
    scanf("%d", &inteiro);

    inteiro%2==0 ? puts("O valor é par") : puts("O valor é ímpar");

    return 0;
}