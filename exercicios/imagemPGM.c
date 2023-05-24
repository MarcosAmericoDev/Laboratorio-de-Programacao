#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 255
#define SFT 0

struct Matriz
{
    int quantidade_linha;
    int quantidade_coluna;
    int **linhas;

};
void gerarMatriz(struct Matriz *);
void imprimirMatriz(struct Matriz *);

int main(int argc, char **argv)
{   
    
    if (argc != 3)
    {
        printf("\nUse: ./%s [qLin] [qCol]", *argv);
    }

    struct Matriz matriz;
    struct Matriz *pMatriz = &matriz;
    
    int qLin = atoi(*(argv+1));
    int qCol = atoi(*(argv+2));
    
    pMatriz->quantidade_coluna = qCol;
    pMatriz->quantidade_linha = qLin;

    pMatriz->linhas = (int **) malloc(qLin * sizeof(int));

    for (int i = 0; i < pMatriz->quantidade_linha; i++)
    {
        pMatriz->linhas[i] = malloc(qCol * sizeof(int));
    }

    gerarMatriz(pMatriz);
    imprimirMatriz(pMatriz);

    return 0;
}

void gerarMatriz(struct Matriz *m) 
{   
    srand(time(NULL));

    for (int i = 0; i < m->quantidade_linha; i++)
    {
        for (int j = 0; j < m->quantidade_coluna; j++)
        {
            *(*(m->linhas+i)+j) = rand()%MAX + SFT;
        }
    }
}

void imprimirMatriz(struct Matriz *m)
{
    for (int i = 0; i < m->quantidade_linha; i++)
    {
        for (int j = 0; j < m->quantidade_coluna; j++)
        {
            printf("%4d ", m->linhas[i][j]);
        }
        printf("\n");
    }
}