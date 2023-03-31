#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 3
#define COL 3

int main(void) {

    int matriz[LIN][COL];

    // Entrada

    for (int i = 0; i < LIN; i++)
    {
        for (int k = 0; k < COL; k++)
        {
            printf("Digite o valor da linha %d e coluna %d: ", i+1, k+1);
            scanf("%d", &matriz[i][k]);
        }
    }

    puts("---------------------------");

    // Processamento

    // Saída

    for(int i = 0; i < LIN; i++)
    {
        for (int k = 0; k < COL; k++)
        {
            printf("%4d", matriz[i][k]);
        }
        puts("");
    }
    

    puts("---------------------------");
    for (int i = 0; i < LIN; i++)
    {
        printf("%4d", matriz[i][i]);
    }
    

}