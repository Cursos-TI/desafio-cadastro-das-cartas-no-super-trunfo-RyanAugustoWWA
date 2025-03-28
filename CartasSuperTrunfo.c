#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os dados das cartas
    char estado, estado2; // Estado das cartas
    char codigo[10], codigo2[10]; // Código das cartas
    char cidade[50], cidade2[50]; // Nome das cidades
    unsigned long int populacao, populacao2; // População das cidades
    float areakm, areakm2; // Área em km² das cidades
    float PIB, PIB2; // Produto Interno Bruto das cidades
    int pontos, pontos2; // Pontos turísticos das cidades
    float SuperPoder, SuperPoder2; // Super Poder calculado para cada carta

    // Entrada de dados para a Carta 1
    printf("Carta 1: \n");

    printf("Insira a letra do Estado entre A a H:\n");
    scanf(" %c", &estado);

    printf("Insira o Código da Carta de 01 a 04:\n");
    scanf(" %s", codigo);

    getchar(); // Limpa o buffer do teclado
    printf("Insira o nome da Cidade:\n");
    fgets(cidade, sizeof(cidade), stdin);

    printf("Insira o número de Habitantes da cidade:\n");
    scanf("%lu", &populacao);

    printf("Insira a área em km²:\n");
    scanf("%f", &areakm);

    printf("Insira o PIB bruto da cidade:\n");
    scanf("%f", &PIB);

    printf("Insira o número de Pontos Turísticos da cidade:\n");
    scanf("%d", &pontos);

    getchar(); // Limpa o buffer do teclado

    // Entrada de dados para a Carta 2
    printf("\nCarta 2:\n");

    printf("Insira a letra do Estado entre A a H:\n");
    scanf(" %c", &estado2);

    printf("Insira o Código da Carta de 01 a 04:\n");
    scanf(" %s", codigo2);

    getchar(); // Limpa o buffer do teclado
    printf("Insira o nome da Cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Insira o número de Habitantes da cidade:\n");
    scanf("%lu", &populacao2);

    printf("Insira a área em km²:\n");
    scanf("%f", &areakm2);

    printf("Insira o PIB bruto da cidade:\n");
    scanf("%f", &PIB2);

    printf("Insira o número de Pontos Turísticos da cidade:\n");
    scanf("%d", &pontos2);

    // Cálculo do Super Poder para a Carta 1
    SuperPoder = populacao + areakm + PIB + pontos + (PIB / populacao) + (populacao / areakm);
    if (areakm > 0) {
        SuperPoder += 1.0f / (areakm/populacao); // Adiciona o inverso da densidade populacional
    }

    // Cálculo do Super Poder para a Carta 2
    SuperPoder2 = populacao2 + areakm2 + PIB2 + pontos2 + (PIB2 / populacao2) + (populacao2 / areakm2);
    if (areakm2 > 0) {
        SuperPoder2 += 1.0f / (areakm2/populacao2); // Adiciona o inverso da densidade populacional
    }

    // Impressão dos resultados da Carta 1
    printf("\n===== RESULTADOS =====\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Cidade: %s", cidade);
    printf("População: %lu de habitantes\n", populacao);
    printf("Área em km²: %.2f km²\n", areakm);
    printf("Densidade Demográfica: %.2f hab/km²\n", populacao / areakm);
    printf("PIB: R$%.2f\n", PIB);
    printf("PIB per Capita: R$%.2f reais\n", PIB / populacao);
    printf("Pontos Turísticos: %d\n", pontos);
    printf("Super Poder: %.2f\n", SuperPoder);

    // Impressão dos resultados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %lu de habitantes\n", populacao2);
    printf("Área em km²: %.2f km²\n", areakm2);
    printf("Densidade Demográfica: %.2f hab/km²\n", populacao2 / areakm2);
    printf("PIB: R$%.2f\n", PIB2);
    printf("PIB per Capita: R$%.2f reais\n", PIB2 / populacao2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    // Comparação das Cartas
    printf("\n===== COMPARAÇÃO DAS CARTAS =====\n");

    // Comparação da População
    printf("\nPopulação: ");
    if (populacao > populacao2) {
        printf("Carta 1 vence (1)\n");
    } else {
        printf("Carta 2 vence (0)\n");
    }

    // Comparação da Área
    printf("Área em km²: ");
    if (areakm > areakm2) {
        printf("Carta 1 vence (1)\n");
    } else {
        printf("Carta 2 vence (0)\n");
    }

    // Comparação da Densidade Demográfica (menor vence)
    printf("Densidade Demográfica: ");
    if ((populacao / areakm) < (populacao2 / areakm2)) {
        printf("Carta 1 vence (1)\n");
    } else {
        printf("Carta 2 vence (0)\n");
    }

    // Comparação do PIB
    printf("PIB: ");
    if (PIB > PIB2) {
        printf("Carta 1 vence (1)\n");
    } else {
        printf("Carta 2 vence (0)\n");
    }

    // Comparação do PIB per Capita
    printf("PIB per Capita: ");
    if ((PIB / populacao) > (PIB2 / populacao2)) {
        printf("Carta 1 vence (1)\n");
    } else {
        printf("Carta 2 vence (0)\n");
    }

    // Comparação dos Pontos Turísticos
    printf("Pontos Turísticos: ");
    if (pontos > pontos2) {
        printf("Carta 1 vence (1)\n");
    } else {
        printf("Carta 2 vence (0)\n");
    }

    // Comparação do Super Poder
    printf("Super Poder: ");
    if (SuperPoder > SuperPoder2) {
        printf("Carta 1 vence (1)\n");
    } else {
        printf("Carta 2 vence (0)\n");
    }

    return 0;
}
