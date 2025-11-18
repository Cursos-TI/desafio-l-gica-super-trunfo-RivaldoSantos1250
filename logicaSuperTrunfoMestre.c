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

    double somaResultado1, somaResultado2;

    int opcao, opcao2, pontos1, pontos2;

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

    // Primeiro Menu interativo
    printf("Escolha o primeiro atributo para comparar: \n");
    printf("O atributo com maior valor vence, exceto a densidade, que vence com o menor valor (inverso).\n");
    printf("[1] População\n");
    printf("[2] Área\n");
    printf("[3] PIB\n");
    printf("[4] Pontos Turísticos\n");
    printf("[5] Densidade Populacional\n");
    printf("[6] PIB per Capita\n");
    printf("[7] Super Poder\n");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            pontos1 = populacao1 > populacao2 ? 1 : 0;
            somaResultado1 = populacao1;
            somaResultado1 = populacao2;
            break;

        case 2:
            pontos1 = area1 > area1 ? 1 : 0;
            somaResultado1 = area1;
            somaResultado1 = area2;
            break;

        case 3:
            pontos1 = pib1 = pib2 ? 1 : 0;
            somaResultado1 = pib1;
            somaResultado1 = pib2;
            break;

        case 4:
            pontos1 = turista1 > turista2 ? 1 : 0;
            somaResultado1 = turista1;
            somaResultado1 = turista2;
            break;

        case 5:
            pontos1 = densidadeInversa1 < densidadePop2 ? 1 : 0;
            somaResultado1 = densidadePop1;
            somaResultado1 = densidadePop2;
            break;

        case 6:
            pontos1 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
            somaResultado1 = pibPerCapita1;
            somaResultado1 = pibPerCapita2;
            break;

        case 7:
            pontos1 = superPoder1 > superPoder2 ? 1 : 0;
            somaResultado1 = superPoder1;
            somaResultado1 = superPoder1;
            break;

        default:
            printf("Opção inválida!");
            break;
    }

    // Segundo Menu interativo
    printf("Escolha o segundo atributo para comparar: \n");
    printf("O atributo com maior valor vence, exceto a densidade, que vence com o menor valor (inverso).\n");
    printf("[1] População\n");
    printf("[2] Área\n");
    printf("[3] PIB\n");
    printf("[4] Pontos Turísticos\n");
    printf("[5] Densidade Populacional\n");
    printf("[6] PIB per Capita\n");
    printf("[7] Super Poder\n");
    scanf("%d", &opcao2);

    printf("========================\n");

    if (opcao == opcao2) {

        printf("Você escolheu o mesmo atributo.");

    } else {

        switch (opcao2) {

            case 1:
                pontos2 = populacao1 > populacao2 ? 1 : 0;
                somaResultado1 = somaResultado1 + populacao1;
                somaResultado2 = somaResultado2 + populacao2;
                break;

            case 2:
                pontos2 = area1 > area1 ? 1 : 0;
                somaResultado1 = somaResultado1 + area1;
                somaResultado2 = somaResultado2 + area2;
                break;

            case 3:
                pontos2 = pib1 = pib2 ? 1 : 0;
                somaResultado1 = somaResultado1 + pib1;
                somaResultado2 = somaResultado2 + pib2;
                break;

            case 4:
                pontos2 = turista1 > turista2 ? 1 : 0;
                somaResultado1 = somaResultado1 + turista1;
                somaResultado2 = somaResultado2 + turista2;
                break;

            case 5:
                pontos2 = densidadeInversa1 < densidadePop2 ? 1 : 0;
                somaResultado1 = somaResultado1 + densidadePop1;
                somaResultado2 = somaResultado2 + densidadePop2;
                break;

            case 6:
                pontos2 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
                somaResultado1 = somaResultado1 + pibPerCapita1;
                somaResultado2 = somaResultado2 + pibPerCapita2;
                break;

            case 7:
                pontos2 = superPoder1 > superPoder2 ? 1 : 0;
                somaResultado1 = somaResultado1 + superPoder1;
                somaResultado1 = somaResultado1 + superPoder1;
                break;

            default:
                printf("Opção inválida!");
                break;
        }
    }

    if ((pontos1 == 1) && (pontos2 == 1)) {
        printf("carta 1 %s venceu!\n", cidade1);
    } else if (pontos1 != pontos2) {
        printf("Empatou\n");
    } else {
        printf("carta 2 %s venceu!\n", cidade2);
    }

    if (opcao == 1) {
        printf("Carta 1 - %s \n", cidade1);
        printf("População: %lu\n", populacao1);
    } else if (opcao == 2) {
        printf("Carta 1 - %s \n", cidade1);
        printf("Área: %.2f km²\n", area1);
    } else if (opcao == 3) {
        printf("Carta 1 - %s \n", cidade1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
    } else if (opcao == 4) {
        printf("Carta 1 - %s \n", cidade1);
        printf("Número de Pontos Turísticos: %d\n", turista1);
    } else if (opcao == 5) {
        printf("Carta 1 - %s \n", cidade1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1);
    } else if (opcao == 6) {
        printf("Carta 1 - %s \n", cidade1);
        printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    } else if (opcao == 7) {
        printf("Carta 1 - %s \n", cidade1);
        printf("Super Poder %.2f\n", superPoder1);
    } else {
        printf("Opção invalida");
    }

    if (opcao2 == 1) {
        printf("Carta 2 - %s \n", cidade2);
        printf("População: %lu\n", populacao2);
    } else if (opcao2 == 2) {
        printf("Carta 2 - %s \n", cidade2);
        printf("Área: %.2f km²\n", area2);
    } else if (opcao2 == 3) {
        printf("Carta 2 - %s \n", cidade2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
    } else if (opcao2 == 4) {
        printf("Carta 2 - %s \n", cidade2);
        printf("Número de Pontos Turísticos: %d\n", turista2);
    } else if (opcao2 == 5) {
        printf("Carta 2 - %s \n", cidade2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
    } else if (opcao2 == 6) {
        printf("Carta 2 - %s \n", cidade1);
        printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    } else if (opcao2 == 7) {
        printf("Carta 2 - %s \n", cidade2);
        printf("Super Poder %.2f\n", superPoder2);
    } else {
        printf("Opção invalida");
    }

    printf("A soma dos atributos da carta 1 foi: %.2lf\n", somaResultado1);
    printf("A soma dos atributos da carta 2 foi: %.2lf\n", somaResultado2);

    return 0;
}
