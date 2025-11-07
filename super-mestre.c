#include <stdio.h>

int main()
{

    // Variaveis

    char carta1[10], carta2[10];
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    int resultadoPopulacao, resultadoArea, resultadoPib, resultadoPontosTuristicos, resultadoDensidadePopulacional, resultadoPibPerCapita, resultadoSuperPoder, resultado;

    // Cartas 1

    printf("\n----CARTA 1----\n");

    printf("Digite o nome do estado de A a H:\n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta:\n");
    scanf("%s", codigo1);

    printf("Digite a sua cidade:\n");
    scanf("%s", cidade1);

    printf("Digite a populaçao:\n");
    scanf("%d", &populacao1);

    printf("Area em km²:\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos1);

    // Cartas 2

    printf("\n----CARTA 2----\n");

    printf("Digite o nome do estado de A a H:\n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta:\n");
    scanf("%s", codigo2);

    printf("Digite a sua cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a populaçao:\n");
    scanf("%d", &populacao2);

    printf("Area em km²:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos2);

    // Calculando a densidade populacional Carta 1
    densidadePopulacional1 = populacao1 / area1;

    // Calculando o pib per capita Carta 1
    pibPerCapita1 = (pib1 * 1000000000) / (float) populacao1;

    // Calculanddo a densidade populacional Carta 2
    densidadePopulacional2 = populacao2 / area2;

    // Calculando o pib per capita Carta 2
    pibPerCapita2 = (pib2 * 1000000000)/ (float) populacao2;

    //Calculando o SUPER PODER Carta 1
     superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + 1 / densidadePopulacional1;

     //Calculando o SUPER PODER Carta 2
     superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + 1 / densidadePopulacional2;

     //Resultados:

     resultadoPopulacao = populacao1 > populacao2;

     resultadoArea = area1 > area2;

     resultadoPib = pib1 > pib2;

     resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;

     resultadoDensidadePopulacional = densidadePopulacional1 > densidadePopulacional2;

     resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;

     resultadoSuperPoder = superPoder1 > superPoder2;

    // Informações Carta 1

    printf("\n------Carta 1------\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area em km²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional:%.2f hab/km²\n", densidadePopulacional1);
    printf("Pib Per Capita:%.2f reais\n", pibPerCapita1);
    printf("---SUPER PODER---\n");
    printf("Seu Super Poder foi: %f\n", superPoder1);

    //Informações Carta 2

    printf("\n------Carta 2------\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area em km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional:%.2f hab/km²\n", densidadePopulacional2);
    printf("Pib Per Capita:%.2f reais\n", pibPerCapita2);
    printf("---SUPER PODER---\n");
    printf("Seu Super Poder foi: %f\n", superPoder2);

    //Comparação das Cartas

    printf("\n------Resultados do jogo:------\n");

    if (populacao1 > populacao2){
        printf("Carta 1 venceu em população!\n");
    } else {
        printf("Carta 2 venceu em população!\n");
    }

    if (area1 > area2){
        printf("Carta 1 venceu área!\n");
    } else{
        printf("Carta 2 venceu área!\n");
    }

    if (pib1 > pib2){
        printf("Carta 1 venceu PIB!\n");
    } else{
        printf("Carta 2 venceu PIB!\n");
    }

    if (pontosTuristicos1 > pontosTuristicos2){
        printf("Carta 1 venceu em pontos turísticos!\n");
    } else{
        printf("Carta 2 venceu pontos turísticos!\n");
    }

    if (densidadePopulacional1 < densidadePopulacional2){
        printf("Carta 1 venceu em densidade populacional!\n");
    } else{
        printf("Carta 2 venceu em densidade populacional!\n");
    }

    if (pibPerCapita1 > pibPerCapita2){
        printf("Carta 1 venceu em PIB Per Capita!\n");
    } else{
        printf("Carta 2 venceu PIB Per Capita!\n");
    }

    if (superPoder1 > superPoder2){
        printf("Carta 1 venceu utilizando o SUPER PODER!\n");
    } else{
        printf("Carta 2 venceu utilizando o SUPER PODER!\n");
    }

    

    return 0;
}