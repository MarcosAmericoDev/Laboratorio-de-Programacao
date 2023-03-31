#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 5
#define COL 5
#define MAX 20
#define SFT 0

int main(void) {

    srand(time(NULL));

    // Entrada de dados
    int matriz[LIN][COL];
    for (int i = 0; i < LIN; i++)
    {
        for(int j = 0; j < COL ; j++) matriz[i][j] = SFT + rand() % MAX;
    }

    int valor;
    printf("Digite o valor que deixa escanear na matriz: ");
    scanf("%d", &valor);

    // Processamento
    int quantidade_de_aparecimentos = 0;
    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if(matriz[i][j] == valor) quantidade_de_aparecimentos++;
        }
    }

    // Saída de dados

    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%4d", matriz[i][j]);
        }
        puts("");
    }
    
    puts("---------------");
    printf("O valor aparece %d vezes.", quantidade_de_aparecimentos);

    return 0;
}