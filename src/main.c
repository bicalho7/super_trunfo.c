#include <stdio.h>

int main() {
    // Declaração de variáveis para a carta 1
    char estado1;
    char codigo1[5];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pt1;
    float densidadedemografica1;
    float pibpercapita1;
    float superpoder1;

     // Declaração de variáveis para a carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pt2;
    float densidadedemografica2;
    float pibpercapita2;
    float superpoder2;

    // Leitura dos dados da carta 1 ---
    printf("Digite seu Estado (uma letra de 'A' a 'H'): \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite o numero de habitantes: \n");
    scanf("%lu", &populacao1);

    printf("Digite a area em km: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pt1);

    pibpercapita1 = pib1/populacao1;
    printf("PIB per capita: %.0f\n", pibpercapita1);

    densidadedemografica1 = populacao1/area1;
    printf("densidade demografical: %.2f\n", densidadedemografica1);

    superpoder1 = populacao1 + area1 + pib1 + pt1 + pibpercapita1 + (1/densidadedemografica1);
    printf("super poder1: %.2f\n", superpoder1);

    // Leitura dos dados da carta 2 ---
    printf("Digite seu Estado (uma letra de 'A' a 'H'): \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o numero de habitantes: \n");
    scanf("%lu", &populacao2);

    printf("Digite a area em km: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pt2);

    pibpercapita2 = pib2/populacao2;
    printf(" PIB per capita2: %.2f\n", pibpercapita2);

    densidadedemografica2 = populacao2/area2;
    printf("densidade demografica2: %.2f\n", densidadedemografica2);

    superpoder2 = populacao2 + area2 + pib2 + pt2 + pibpercapita2 + (1/densidadedemografica2);
    printf("super poder2: %.2f\n", superpoder2);

    //exibição da carta 1
    printf("Estado:%c\n", estado1);

    printf("Codigo da carta:%s\n", codigo1);

    printf("Cidade:%s\n", cidade1);

    printf("Populacao:%lu\n", populacao1);

    printf("Area:%.2f Km2\n", area1);

    printf("PIB:%.2f bilhoes de reais\n", pib1);

    printf("Pontos turisticos:%d\n", pt1);

    //exibição da carta 2
    printf("Estado:%c\n", estado2);

    printf("Codigo da carta:%s\n", codigo2);

    printf("Cidade:%s\n", cidade2);

    printf("Populacao:%lu\n", populacao2);

    printf("Area:%.2f Km2\n", area2);

    printf("PIB:%.2f bilhoes de reais\n", pib2);

    printf("Pontos turisticos:%d\n", pt2);

    printf("Comparação de Cartas.\n");

    //comparação de cartas

    if (populacao1 > populacao2){
        printf("carta1 (cidade1): %.0f\n", populacao1);
        printf("carta2 (cidade2): %.0f\n", populacao2);
        printf("Resultado: carta1 (cidade1) venceu\n");
    }
    else if (populacao2 > populacao1){
        printf("carta1 (cidade1): %.0f\n", populacao1);
        printf("carta2 (cidade2): %.0f\n", populacao2);
        printf("Resultado: carta2 (cidade2) venceu\n");}

    else { printf("Carta 1 (Sua cidade): %.0f\n", populacao1);
    printf("Carta 2 (Cidade do oponente): %.0f\n", populacao2);
    printf("Resultado: Empate!\n");}

    //comparação de area
    if (area1 > area2){
        printf("Area: Carta 1 venceu\n");}

    else {
        printf("Area: Carta 2 venceu\n");
    }
    //comparação do pib
    if (pib1 > pib2){
        printf("Pib: Carta 1 venceu\n");}

    else {
        printf("Pib: Carta 2 venceu\n");

    }

    //comparação pt
    if (pt1 > pt2){
        printf("Pontos turisticos: Carta 1 venceu\n");}

    else {
        printf("Pontos turisticos: Carta 2 venceu\n");
    }

    // comparação densidade
    if (densidadedemografica1 < densidadedemografica2){
        printf("Densidade demografica: Carta 1 venceu\n");}

    else{
        printf("Densidade demografica: Carta 2 venceu\n");}

    //comparação do pib per capita
    if (pibpercapita1 > pibpercapita2){
        printf("PIB per Capita: Carta 1 venceu\n");}

    else {
        printf("PIB per Capita: Carta 2 venceu\n");
    }

    //comparação super poder
    if (superpoder1 > superpoder2){
        printf("Super Poder: Carta 1 venceu\n");}

    else {
        printf("Super Poder: Carta 2 venceu\n");

    }

    return 0;
    }



