#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado_1[30], estado_2[30], cidade_1[30], cidade_2[30], codigo_1[10], codigo_2[10];
    int populacao_1, populacao_2, pontos_turisticos_1, pontos_turisticos_2;
    float area_1, area_2, PIB_1, PIB_2;
    
    // Cadastro das Cartas:
   // DADOS DA CARTA 1
    printf("Informe o nome do estado 1:\n");
    scanf("%s", estado_1);

    printf("Informe o código da carta 1:\n");
    scanf("%s", codigo_1);

    printf("Informe o nome da cidade 1:\n");
    scanf("%s", cidade_1);

    printf("Informe o número da população 1:\n");
    scanf("%d", &populacao_1);

    printf("Informe o número de pontos turísticos da cidade 1:\n");
    scanf("%d", &pontos_turisticos_1);

    printf("Informe a área da cidade 1:\n");
    scanf("%f", &area_1);

    printf("Informe o PIB da cidade 1:\n");
    scanf("%f", &PIB_1);

    // DADOS DA CARTA 2
    printf("Informe o nome do estado 2:\n");
    scanf("%s", estado_2);

    printf("Informe o código da carta 2:\n");
    scanf("%s", codigo_2);

    printf("Informe o nome da cidade 2:\n");
    scanf("%s", cidade_2);

    printf("Informe o número da população da cidade 2:\n");
    scanf("%d", &populacao_2);

    printf("Informe o número de pontos turísticos da cidade 2:\n");
    scanf("%d", &pontos_turisticos_2);

    printf("Informe a área da cidade 2:\n");
    scanf("%f", &area_2);

    printf("Informe o PIB da cidade 2:\n");
    scanf("%f", &PIB_2);

    
    // Exibição dos Dados das Cartas:
   
    printf("\n--- DADOS DA CIDADE 1 ---\n");
    printf("Estado: %s\n", estado_1);
    printf("Código da Carta: %s\n", codigo_1);
    printf("Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_1);
    printf("Área: %.2f\n", area_1);
    printf("PIB: %.2f\n", PIB_1);

    printf("\n--- DADOS DA CIDADE 2 ---\n");
    printf("Estado: %s\n", estado_2);
    printf("Código da Carta: %s\n", codigo_2);
    printf("Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_2);
    printf("Área: %.2f\n", area_2);
    printf("PIB: %.2f\n", PIB_2);

    return 0;
}
