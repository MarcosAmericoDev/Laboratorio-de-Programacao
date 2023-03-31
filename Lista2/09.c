#include <stdio.h>


int main() {

    int valor_anterior = 0, valor_atual = 1, i = 1;

    printf("%d ", valor_anterior);
    
    Fibonnaci(valor_atual, valor_anterior, i);

    return 0;
}

int Fibonnaci (int valor, int valor_anterior, int i) {

    printf("%d ", valor);

    i++;
    return i != 20 ? Fibonnaci(valor+valor_anterior, valor, i): 0;

}