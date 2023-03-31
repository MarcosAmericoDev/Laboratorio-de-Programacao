#include <stdio.h>

int main(){
    float Altura, imcMasc, imcFem;
    char Sexo;

    printf("Digite a sua altura: ");
    scanf("%f", &Altura);

    printf("Seu sexo biológico é masculino ou feminino? [M/F] ");
    fflush(stdin); // para retirar o buffer do teclado
    scanf("%c", &Sexo);
    imcMasc = 72.7 * Altura - 58;
    imcFem = 62.1 * Altura - 44.7;
    
    if(Sexo == 'M') {
        printf("O seu peso ideal é: %.1fkg", imcMasc);
    } else if (Sexo == 'F') {
        printf("O seu peso ideal é: %.1fkg", imcFem);
    } else {
        printf("Sexo diferente do que foi pedido.");
    }

    return 0;
}
