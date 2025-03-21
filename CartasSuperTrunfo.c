#include <stdio.h>

int main(){

    char estado, estado2; // Declaração de variáveis para armazenar o estado das duas cartas
    char codigo[10], codigo2[10]; // Declaração de variáveis para armazenar o código das duas cartas
    char cidade[50], cidade2[50]; // Declaração de variáveis para armazenar o nome das cidades das duas cartas
    float populacao, populacao2; // Declaração de variáveis para armazenar a população das duas cidades
    float areakm, areakm2; // Declaração de variáveis para armazenar a área em km² das duas cidades
    float PIB, PIB2; // Declaração de variáveis para armazenar o PIB das duas cidades
    int pontos, pontos2; // Declaração de variáveis para armazenar o número de pontos turísticos das duas cidades
    float densidade, PIBperCapita; // Declaração de variáveis para armazenar a densidade demográfica e o PIB per capita

    // Entrada da Carta 1
    printf("Carta 1: \n");

    printf("Insira a letra do Estado entre A a H:\n");
    scanf(" %c", &estado); // Leitura do estado da carta 1

    printf("Insira o Código da Carta de 01 a 04:\n");
    scanf(" %s", codigo); // Leitura do código da carta 1

    getchar(); // Limpa o buffer do teclado
    printf("Insira o nome da Cidade:\n");
    fgets(cidade, sizeof(cidade), stdin); // Leitura do nome da cidade da carta 1

    printf("Insira o número de Habitantes da cidade:\n");
    scanf("%f", &populacao); // Leitura da população da cidade da carta 1

    printf("Insira a área em km²:\n");
    scanf("%f", &areakm); // Leitura da área em km² da cidade da carta 1

    printf("Insira o PIB bruto da cidade:\n");
    scanf("%f", &PIB); // Leitura do PIB da cidade da carta 1

    printf("Insira o número de Pontos Turísticos da cidade:\n");
    scanf("%d", &pontos); // Leitura do número de pontos turísticos da cidade da carta 1

    getchar(); // Limpa o buffer do teclado antes da segunda entrada

    // Entrada da Carta 2
    printf("\nCarta 2:\n");

    printf("Insira a letra do Estado entre A a H:\n");
    scanf(" %c", &estado2); // Leitura do estado da carta 2

    printf("Insira o Código da Carta de 01 a 04:\n");
    scanf(" %s", codigo2); // Leitura do código da carta 2

    getchar(); // Limpa o buffer do teclado
    printf("Insira o nome da Cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin); // Leitura do nome da cidade da carta 2

    printf("Insira o número de Habitantes da cidade:\n");
    scanf("%f", &populacao2); // Leitura da população da cidade da carta 2

    printf("Insira a área em km²:\n");
    scanf("%f", &areakm2); // Leitura da área em km² da cidade da carta 2

    printf("Insira o PIB bruto da cidade:\n");
    scanf("%f", &PIB2); // Leitura do PIB da cidade da carta 2

    printf("Insira o número de Pontos Turísticos da cidade:\n");
    scanf("%d", &pontos2); // Leitura do número de pontos turísticos da cidade da carta 2

    // Impressão dos resultados
    printf("\n===== RESULTADOS =====\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado); // Impressão do estado da carta 1
    printf("Código da Carta: %s\n", codigo); // Impressão do código da carta 1
    printf("Cidade: %s", cidade); // Impressão do nome da cidade da carta 1
    printf("População: %.0f de habitantes\n", populacao); // Impressão da população da cidade da carta 1
    printf("Área em km²: %.0fkm²\n", areakm); // Impressão da área em km² da cidade da carta 1
    printf("Densidade Demográfica: %.2f hab/km²\n", populacao/areakm); // Impressão da densidade demográfica da cidade da carta 1
    printf("PIB: R$%.0f\n", PIB); // Impressão do PIB da cidade da carta 1
    printf("PIB per Capita: R$%.2f reais\n", PIB/populacao); // Impressão do PIB per capita da cidade da carta 1
    printf("Pontos Turísticos: %d\n", pontos); // Impressão do número de pontos turísticos da cidade da carta 1

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2); // Impressão do estado da carta 2
    printf("Código da Carta: %s\n", codigo2); // Impressão do código da carta 2
    printf("Cidade: %s", cidade2); // Impressão do nome da cidade da carta 2
    printf("População: %.0f de habitantes\n", populacao2); // Impressão da população da cidade da carta 2
    printf("Área em km²: %.0fkm²\n", areakm2); // Impressão da área em km² da cidade da carta 2
    printf("Densidade Demográfica: %.2f hab/km²\n", populacao2/areakm2); // Impressão da densidade demográfica da cidade da carta 2
    printf("PIB: R$%.0f\n", PIB2); // Impressão do PIB da cidade da carta 2
    printf("PIB per Capita: R$%.2f reais\n", PIB2/populacao2); // Impressão do PIB per capita da cidade da carta 2
    printf("Pontos Turísticos: %d\n", pontos2); // Impressão do número de pontos turísticos da cidade da carta 2

    return 0; // Retorno da função main indicando que o programa terminou com sucesso
}
