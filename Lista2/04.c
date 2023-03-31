#include <stdio.h>

int main() {

    int AlturaJoaoCentimetros, AlturaPedroCentimetros, Anos;

    AlturaJoaoCentimetros = 150;
    AlturaPedroCentimetros = 110;
    Anos = 0;

    for(;;)
    {
        if (AlturaJoaoCentimetros == AlturaPedroCentimetros)
        {
            break;
        }

        AlturaJoaoCentimetros += 2;
        AlturaPedroCentimetros += 3;

        Anos++;
    }
     
    printf("Pedro vai demorar %d anos para alcançar a altura de João, ambos com %d", Anos, AlturaJoaoCentimetros);
    return 0;
}