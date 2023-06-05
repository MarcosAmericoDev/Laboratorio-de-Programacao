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
void gerarMatriz(struct Matriz);
void imprimirMatriz(struct Matriz);

int main(int argc, char **argv)
{   
    
    if (argc != 3)
    {
        printf("\nUse: ./%s [qLin] [qCol]", *argv);
    }

    // Imagem Principal

    struct Matriz imagemPrincipal;
    struct Matriz *pImagemPrincipal = &imagemPrincipal;

    int qLin = atoi(*(argv+1));
    int qCol = atoi(*(argv+2));
    
    pImagemPrincipal->quantidade_coluna = qCol;
    pImagemPrincipal->quantidade_linha = qLin;

    pImagemPrincipal->linhas = (int **) malloc(pImagemPrincipal->quantidade_linha * sizeof(int));

    for (int i = 0; i < pImagemPrincipal->quantidade_linha; i++)
    {
        pImagemPrincipal->linhas[i] = malloc(pImagemPrincipal->quantidade_coluna * sizeof(int));
    }

    gerarMatriz(imagemPrincipal);
    imprimirMatriz(imagemPrincipal);

    // Recortes

    struct Matriz Recortes[5];

    for (int i = 0; i < 5; i++)
    {
        Recortes[i].quantidade_coluna = 10;
        Recortes[i].quantidade_linha = 10;
    }

    for (int i = 0; i < 5; i++)
    {
        Recortes[i].linhas = (int **) malloc(Recortes[i].quantidade_linha * sizeof(int));

        for (int j = 0; j < Recortes[i].quantidade_linha; j++)
        {
            Recortes[i].linhas[j] = malloc(Recortes[i].quantidade_coluna * sizeof(int));
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        gerarMatriz(Recortes[i]);
        imprimirMatriz(Recortes[i]);
        printf("\n");
    }
    
    

    return 0;
}

void gerarMatriz(struct Matriz m) 
{   
    srand(time(NULL));

    for (int i = 0; i < m.quantidade_linha; i++)
    {
        for (int j = 0; j < m.quantidade_coluna; j++)
        {
            m.linhas[i][j] = rand()%MAX + SFT;
        }
    }
}

void imprimirMatriz(struct Matriz m)
{
    for (int i = 0; i < m.quantidade_linha; i++)
    {
        for (int j = 0; j < m.quantidade_coluna; j++)
        {
            printf("%4d ",  m.linhas[i][j]);
        }
        printf("\n");
    }
}