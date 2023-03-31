#include <stdio.h>

int main() {
    int num;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    printf("O antecessor do seu número e o sucessor é, respectivamente: %d e %d", num-1, num+1);

    return 0;
}