#include <stdio.h>

int main() {
    unsigned long int popu1, popu2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    float densi1, densi2, ppc1, ppc2;
    float sp1, sp2;
    

    // Entrada de dados

    scanf("%lu", &popu1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontos1);

    scanf("%lu", &popu2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontos2);

    // Calculos 

    densi1 = popu1 / area1;
    densi2 = popu2 / area2;

    // PIB per capita
    ppc1 = pib1/ popu1;  
    ppc2= pib1 / popu2;

    // Calculo do super poder
    sp1 = (1 / densi1) + popu1 + area1 +
    sp2 = (1 / densi2) + popu2 + area2 +

    //comparacoes 

    printf("populacao: %d\n", popu1 > popu2);
    printf("area: %d\n" , area1 > area2);
    printf("pib: %d\n" , pib1 > pib2);
    printf("pontos turisticos: %d\n" , pontos1 > pontos2);
    printf("densidade: %d\n", densi1 > densi2);
    printf("pib per capita: %d\n", ppc1 > ppc2);
    printf("Super poder: %d\n" , sp1 >sp2);


    




    return 0;
}
