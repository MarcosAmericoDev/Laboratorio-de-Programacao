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

    struct Matriz imagemPrincipal;
    struct Matriz *pImagemPrincipal = &imagemPrincipal;
    
    int qLin = atoi(*(argv+1));
    int qCol = atoi(*(argv+2));
    
    pImagemPrincipal->quantidade_coluna = qCol;
    pImagemPrincipal->quantidade_linha = qLin;

    pImagemPrincipal->linhas = (int **) malloc(qLin * sizeof(int));

    for (int i = 0; i < pImagemPrincipal->quantidade_linha; i++)
    {
        pImagemPrincipal->linhas[i] = malloc(qCol * sizeof(int));
    }

    gerarMatriz(pImagemPrincipal);
    imprimirMatriz(pImagemPrincipal);

    return 0;
}

void gerarMatriz(struct Matriz *m) 
{   
    srand(time(NULL));

    for (int i = 0; i < m->quantidade_linha; i++)
    {
        for (int j = 0; j < m->quantidade_coluna; j++)
        {
            *(m->linhas[i]+j) = rand()%MAX + SFT;
        }
    }
}

void imprimirMatriz(struct Matriz *m)
{
    for (int i = 0; i < m->quantidade_linha; i++)
    {
        for (int j = 0; j < m->quantidade_coluna; j++)
        {
            printf("%4d ", *(m->linhas[i]+ j));
        }
        printf("\n");
    }
}