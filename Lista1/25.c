#include <stdio.h>
#include <math.h>

int main() {

    int segundosParaConverter, segundos, minutos, horas, restoDivHoras, restoDivMinutos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundosParaConverter);

    horas = segundosParaConverter / 3600;
    restoDivHoras = segundosParaConverter % 3600; // isso dá a quantidade de segundos que sobrou da divisão das horas.

    minutos = restoDivHoras / 60;
    segundos = restoDivHoras % 60;
    
    printf("Com tudo convertido, ficará %d horas, %d minutos e %d segundos", horas, minutos, segundos);

    return 0;
}