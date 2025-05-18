#include <stdio.h>

int main() {
    unsigned long int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    float dens1, dens2, ppc1, ppc2;
    float sp1, sp2;
    

    // Entrada de dados

    scanf("%lu", &pop1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontos1);

    scanf("%lu", &pop2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontos2);

    // Calculos 
    
    //densidade

    dens1 = pop1 / area1;
    dens2 = pop2 / area2;

    // PIB per capita
    ppc1 = pib1 / pop1;  
    ppc2 = pib1 / pop2;

    // Calculo do super poder
    sp1 = (1.0 / dens1) + pop1 + area1 + pib1 + pontos1 + ppc1;
    sp2 = (1.0 / dens2) + pop2 + area2 + pib2 + pontos2 + ppc2;

    //comparacoes 

    printf("populacao: %d\n", pop1 > pop2);
    printf("area: %d\n" , area1 > area2);
    printf("pib: %d\n" , pib1 > pib2);
    printf("pontos turisticos: %d\n" , pontos1 > pontos2);
    printf("densidade: %d\n", dens1 < dens2);
    printf("pib per capita: %d\n", ppc1 > ppc2);
    printf("Super poder: %d\n" , sp1 >sp2);


    




    return 0;
}
