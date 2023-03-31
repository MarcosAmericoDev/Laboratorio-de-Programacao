#include <stdio.h>

int main(){

    int hora, minuto, segundo;

    printf("Horas: ");
    scanf("%d", &hora);
    printf("Minutos: ");
    scanf("%d", &minuto);
    printf("Segundos: ");
    scanf("%d", &segundo);

    printf("Convertendo, a quantidade de segundos total é: %d segundos", hora*3600+minuto*60+segundo);
    return 0;
}
