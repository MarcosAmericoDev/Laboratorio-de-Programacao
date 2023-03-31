#include <stdio.h>

int main() {
    float VotosDoPaulo, VotosDaRenata, VotosEmBranco, VotosNulos, QuantidadeDeVotos;
    float PorcentagemVotosPaulo, PorcentagemVotosRenata, PorcentagemVotosBranco, PorcentagemVotosNulo;
    int voto;

    VotosDaRenata = 0;
    VotosDoPaulo = 0;
    VotosEmBranco = 0;
    VotosNulos = 0;
    QuantidadeDeVotos = 0;

    for(;;) 
    {
        printf("Digite o seu voto: ");
        scanf("%d", &voto);

        switch (voto)
        {
        case 5:
            VotosDoPaulo++;
            break;
        case 7:
            VotosDaRenata++;
            break;
        case 0:
            VotosEmBranco++;
            break;
        }

        if (voto > 0 && voto != 5 && voto != 7)
        {
            VotosNulos++;
        }
        else if (voto < 0)
        {
            break;
        }

        QuantidadeDeVotos++;
    }

    PorcentagemVotosRenata = VotosDaRenata/QuantidadeDeVotos*100;
    PorcentagemVotosPaulo = VotosDoPaulo/QuantidadeDeVotos*100;
    PorcentagemVotosBranco = VotosEmBranco/QuantidadeDeVotos*100;
    PorcentagemVotosNulo = VotosNulos/QuantidadeDeVotos*100;

    puts("==================================");
    printf("- Paulo (5): %.1f%% dos votos \n", PorcentagemVotosPaulo); // colocando %% duas vezes para inserir o símbolo de %
    printf("- Renata (7): %.1f%% dos votos \n", PorcentagemVotosRenata); // após o valor
    printf("- Votos em branco: %.1f%% dos votos \n", PorcentagemVotosBranco);
    printf("- Votos Nulos: %.1f%% dos votos \n", PorcentagemVotosNulo);


    if (PorcentagemVotosPaulo > PorcentagemVotosRenata)
    {
        puts("Paulo foi eleito!");
    }
    else
    {
        puts("Renata foi eleita!");
    }
    puts("==================================");

    return 0;
}