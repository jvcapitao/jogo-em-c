#include <stdio.h>

iint main(){

    
    // VARIAVEIS

    char pais1[20], pais2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadeDemografica1, densidadeDemografica2;
    int atributos;

     // MENU DO JOGO

     printf("\n========== Seja bem vindo ao Super-Trunfo! =========\n");

    
     printf("\n========== Menu principal ==========\n");
     
     printf("\nO jogo começou, insira os dados da sua Carta! \n");

        //COLETA DE DADOS DA CARTA NUMERO 1

        printf("\n----CARTA 1----\n");

        printf("Digite o nome do seu país:\n");
        scanf("%s", pais1);

        printf("Digite a população:\n");
        scanf("%d", &populacao1);

        printf("Área em km²:\n");
        scanf("%f", &area1);

        printf("PIB:\n");
        scanf("%f", &pib1);

        printf("Número de pontos turísticos:\n");
        scanf("%d", &pontosTuristicos1);

        //COLETA DE DADOS DA CARTA NUMERO 2

        printf("\n----CARTA 2----\n");

        printf("Digite o nome do seu país:\n");
        scanf("%s", pais2);

        printf("Digite a população:\n");
        scanf("%d", &populacao2);

        printf("Área em km²:\n");
        scanf("%f", &area2);

        printf("PIB:\n");
        scanf("%f", &pib2);

        printf("Número de pontos turísticos:\n");
        scanf("%d", &pontosTuristicos2);

         // Calculando a densidade demográfica Carta 1
        densidadeDemografica1 = populacao1 / area1;

        // Calculanddo a densidade demográfica Carta 2
        densidadeDemografica2 = populacao2 / area2;

        //MOSTRUÁRIO DE INFORMAÇÕES DA CARTA 1

        printf("\n------Carta 1------\n");

        printf("Nome do país: %s\n", pais1);
        printf("Populacao: %d\n", populacao1);
        printf("Area em km²: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos turisticos: %d\n", pontosTuristicos1);
        printf("Densidade demográfica:%.2f hab/km²\n", densidadeDemografica1);

        //MOSTRUÁRIO DE INFORMAÇÕES DA CARTA 2

        printf("\n------Carta 2------\n");

        printf("Nome do país: %s\n", pais2);
        printf("Populacao: %d\n", populacao2);
        printf("Area em km²: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos turisticos: %d\n", pontosTuristicos2);
        printf("Densidade demográfica:%.2f hab/km²\n", densidadeDemografica2);

         //SELEÇÃO DE COMPARAÇÃO DE ATRIBUTOS

         printf("\n====== Informações coletadas! ======\n");
         printf("Agora selecione quais atributos serão comparados.\n");
         printf("Caso seja população, pressione 1!\n");
         printf("Caso seja a área, pressione 2!\n");
         printf("Caso seja o PIB, pressione 3!\n");
         printf("Caso seja o número de pontos turísticos, pressione 4!\n");
         printf("Caso seja a densidade demográfica, pressione 5!\n");
         scanf("%d", &atributos);

         switch (atributos)
         {
         case 1:
            if(populacao1 > populacao2)
            {
                printf("A Carta 1 venceu!\n");
            } else if (populacao1 == populacao2)
            {
                printf("Houve um empate!\n");
            } else{
                printf("A Carta 2 venceu!\n");
            }
            break;
         case 2:
            if(area1 > area2){
                printf("A Carta 1 venceu!\n");
            } else if (area1 == area2){
                printf("Houve um empate!\n");
            } else {
                printf("A Carta 2 venceu!\n");
            }
            break;
            case 3:
            if (pib1 > pib2)
            {
                printf("A Carta 1 venceu!\n");
            } else if (pib1 == pib2){
                printf("Houve um empate!\n");
            } else {
                printf("A Carta 2 venceu!\n");
            }
            break;
            case 4:
            if (pontosTuristicos1 > pontosTuristicos2)
            {
                printf("A Carta 1 venceu!\n");
            } else if (pontosTuristicos1 == pontosTuristicos2){
                printf("Houve um empate!\n");
            } else {
                printf("A Carta 2 venceu!\n");
            }
            break;
            case 5:
            if (densidadeDemografica1 < densidadeDemografica2)
            {
                printf("A Carta 1 venceu!\n");
            } else if (densidadeDemografica1 == densidadeDemografica2){
                printf("Houve um empate!\n");
            } else {
                printf("A Carta 2 venceu!\n");
            }
            break;
            default:
                printf("Opção inválida!\n");
            break;
         }

    return 0;

}
