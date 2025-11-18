#include <stdio.h>

int main() {

    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    int turista1;
    float area1, pib1, densidadePop1, pibPerCapita1, superPoder1, densidadeInversa1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    int turista2;
    float area2, pib2, densidadePop2, pibPerCapita2, superPoder2;

    // Menu interativo
    int opcao;

    // Ler informações da Carta 1
    printf("CADASTRO DA CARTA 1\n");
    printf("Insira letra do Estado: ");
    scanf(" %c", &estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &turista1);

    printf("========================\n");

    // Ler informações da Carta 2
    printf("CADASTRO DA CARTA 2:\n");
    printf("Insira letra do Estado: ");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &turista2);

    printf("========================\n");

    // Cálculo da densidade populacional
    densidadePop1 = populacao1 / area1;
    densidadePop2 = populacao2 / area2;

    // Cálculo do PIB per capita 
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Cálculo do Super Poder
    superPoder1 = populacao1 + area1 + pib1 + turista1 + pibPerCapita1 + (1 / densidadePop1);
    superPoder2 = populacao2 + area2 + pib2 + turista2 + pibPerCapita2 + (1 / densidadePop2);

    // Mostrar Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turista1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder %.2f\n", superPoder1);

    printf("========================\n");

    // Mostrar Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turista2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder %.2f\n", superPoder2);

    printf("========================\n");

    // Menu interativo
    printf("Escolha o atributo para comparar: \n");
    printf("O atributo com maior valor vence, exceto a densidade, que vence com o menor valor (inverso).\n");
    printf("[1] População\n");
    printf("[2] Área\n");
    printf("[3] PIB\n");
    printf("[4] Pontos Turísticos\n");
    printf("[5] Densidade Populacional\n");
    printf("[6] PIB per Capita\n");
    printf("[7] Super Poder\n");
    scanf("%d", &opcao);

    printf("========================\n");

    // Comparar e Exibir Resultados
    switch (opcao) {

        case 1:
            printf("Carta 1 - %s \n", cidade1);
            printf("População: %lu\n", populacao1);
            printf("Carta 2 - %s \n", cidade2);
            printf("População: %lu\n", populacao2);

            if (populacao1 > populacao2) {
                printf("População: Carta 1 venceu \n");
            } else if (populacao1 < populacao2) {
                printf("População: Carta 2 venceu \n");
            } else {
                printf("Houve um empate!\n");
            }
            break;

        case 2:
            printf("Carta 1 - %s \n", cidade1);
            printf("Área: %.2f km²\n", area1);
            printf("Carta 2 - %s \n", cidade2);
            printf("Área: %.2f km²\n", area2);

            if (area1 > area2) {
                printf("Área: Carta 1 venceu \n");
            } else if (area1 < area2) {
                printf("Área: Carta 2 venceu \n");
            } else {
                printf("Houve um empate!\n");
            }
            break;

        case 3:
            printf("Carta 1 - %s \n", cidade1);
            printf("PIB: %.2f bilhões de reais\n", pib1);
            printf("Carta 2 - %s \n", cidade2);
            printf("PIB: %.2f bilhões de reais\n", pib2);

            if (pib1 > pib2) {
                printf("PIB: Carta 1 venceu \n");
            } else if (pib1 < pib2) {
                printf("PIB: Carta 2 venceu \n");
            } else {
                printf("Houve um empate!\n");
            }
            break;

        case 4:
            printf("Carta 1 - %s \n", cidade1);
            printf("Número de Pontos Turísticos: %d\n", turista1);
            printf("Carta 2 - %s \n", cidade2);
            printf("Número de Pontos Turísticos: %d\n", turista2);

            if (turista1 > turista2) {
                printf("Pontos Turísticos: Carta 1 venceu \n");
            } else if (turista1 < turista2) {
                printf("Pontos Turísticos: Carta 2 venceu \n");
            } else {
                printf("Houve um empate!\n");
            }
            break;

        case 5:
            printf("Carta 1 - %s \n", cidade1);
            printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1);
            printf("Carta 2 - %s \n", cidade2);
            printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);

            if (densidadePop1 < densidadePop2) {
                printf("Densidade Populacional: Carta 1 venceu \n");
            } else if (densidadePop1 > densidadePop2) {
                printf("Densidade Populacional: Carta 2 venceu \n");
            } else {
                printf("Houve um empate!\n");
            }
            break;

        case 6:
            printf("Carta 1 - %s \n", cidade1);
            printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
            printf("Carta 2 - %s \n", cidade2);
            printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

            if (pibPerCapita1 > pibPerCapita2) {
                printf("PIB per Capita: Carta 1 venceu \n");
            } else if (pibPerCapita1 < pibPerCapita2) {
                printf("PIB per Capita: Carta 2 venceu \n");
            } else {
                printf("Houve um empate!\n");
            }
            break;

        case 7:
            printf("Carta 1 - %s \n", cidade1);
            printf("Super Poder %.2f\n", superPoder1);
            printf("Carta 2 - %s \n", cidade2);
            printf("Super Poder %.2f\n", superPoder2);

            if (superPoder1 > superPoder2) {
                printf("Super Poder: Carta 1 venceu \n");
            } else if (superPoder1 < superPoder2) {
                printf("Super Poder: Carta 2 venceu \n");
            } else {
                printf("Houve um empate!\n");
            }
            break;

        default:
            printf("Opção inválida!");
            break;
    }

    return 0;
}
