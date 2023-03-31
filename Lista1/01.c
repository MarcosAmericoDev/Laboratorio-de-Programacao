#include <stdio.h>

int main (){
    
    int PrimeiroX = 7+3*6/2-1; // É para dar o valor "15"
    int SegundoX = 2%2 + 2*2-2/2; // É para dar o valor "3"
    int TerceiroX = (3*9*(3 +(9*3/(3)))); // É para dar o valor "324"

    printf(" O valor do primeiro x: %d \n O valor do segundo x: %d \n O valor do terceiro x: %d", PrimeiroX, SegundoX, TerceiroX);

    return 0;
}