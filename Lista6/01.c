#include <stdio.h>

struct aluno
{
    float nota1;
    float nota2;
    float media;
};

int main(void)
{
    struct aluno Al;

    puts("Digite a primeira nota do aluno:");
    scanf("%f", &Al.nota1);

    puts("Digite a segunda nota do aluno:");
    scanf("%f", &Al.nota2);

    Al.media = (Al.nota1 + Al.nota2) / 2;

    printf("A média do aluno é: %.2f", Al.media);

    return 0;
}