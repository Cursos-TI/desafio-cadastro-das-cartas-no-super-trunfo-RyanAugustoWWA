#include <stdio.h>

int main(){

    char estado, estado2;
    char codigo[10], codigo2[10];
    char cidade[50], cidade2[50];
    float populacao, populacao2;
    float areakm, areakm2;
    float PIB, PIB2;
    int pontos, pontos2;

    // Entrada da Carta 1
    printf("Carta 1: \n");

    printf("Insira a letra do Estado entre A a H:\n");
    scanf(" %c", &estado); 

    printf("Insira o Código da Carta de 01 a 04:\n");
    scanf(" %s", codigo);

    getchar(); 
    printf("Insira o nome da Cidade:\n");
    fgets(cidade, sizeof(cidade), stdin);

    printf("Insira o número de Habitantes da cidade:\n");
    scanf("%f", &populacao);

    printf("Insira a área em km²:\n");
    scanf("%f", &areakm);

    printf("Insira o PIB bruto da cidade:\n");
    scanf("%f", &PIB);

    printf("Insira o número de Pontos Turísticos da cidade:\n");
    scanf("%d", &pontos);

    getchar(); // Limpa buffer antes da segunda entrada

    // Entrada da Carta 2
    printf("\nCarta 2:\n");

    printf("Insira a letra do Estado entre A a H:\n");
    scanf(" %c", &estado2);

    printf("Insira o Código da Carta de 01 a 04:\n");
    scanf(" %s", codigo2);

    getchar();
    printf("Insira o nome da Cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Insira o número de Habitantes da cidade:\n");
    scanf("%f", &populacao2);

    printf("Insira a área em km²:\n");
    scanf("%f", &areakm2);

    printf("Insira o PIB bruto da cidade:\n");
    scanf("%f", &PIB2);

    printf("Insira o número de Pontos Turísticos da cidade:\n");
    scanf("%d", &pontos2);

    // Impressão dos resultados
    printf("\n===== RESULTADOS =====\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Cidade: %s", cidade);
    printf("População: %.0f\n", populacao);
    printf("Área em km²: %.0fkm²\n", areakm);
    printf("PIB: %.0f\n", PIB);
    printf("Pontos Turísticos: %d\n", pontos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %.0f\n", populacao2);
    printf("Área em km²: %.0fkm²\n", areakm2);
    printf("PIB: %.0f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontos2);

    return 0;
}
