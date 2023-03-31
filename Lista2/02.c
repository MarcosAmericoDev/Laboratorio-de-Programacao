#include <stdio.h>

int main(){
    int semana;
    for (;;)
    {
        printf("Digite um valor de 0 até 7 (0 vai cancelar o programa): ");
        scanf("%d", &semana);

        if (semana > 7 || semana < 1 )
        {
            puts("Número de dia inválido");
        } else
        {
            switch (semana)
            {
            case 1:
                puts("O dia é domingo");
                break;
            case 2:
                puts("O dia é segunda");
                break;
            case 3:
                puts("O dia é terça");
                break;
            case 4:
                puts("O dia é quarta");
                break;
            case 5:
                puts("O dia é quinta");
                break;
            case 6:
                puts("O dia é sexta");
                break;
            case 7:
                puts("O dia é sábado");
                break;
            }    
        } 

        if (semana ==0)
        {
            break;
        }
        
    }
    return 0;
}