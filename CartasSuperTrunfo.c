#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    // Por advento de curiosidade, no momento em que escrevo esse código, estou usando as cidades "Fortaleza" e "Curitiba".   
    // Aqui começa a entrada de dados da carta 1
    printf("Informe o estado da cidade da primeira carta: \n");
    scanf(" %c", &estado1);

    printf("Informe o código da primeira carta: \n");
    scanf("%s", codigo1); 

    printf("Informe o nome da primeira cidade: \n");
    scanf("%s", nome1); 

    printf("Informe a população da primeira cidade: \n");
    scanf("%d", &populacao1);

    printf("Informe a área da primeira cidade (km²): \n");
    scanf("%f", &area1);

    printf("Informe o PIB da primeira cidade: \n");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turísticos da primeira cidade: \n");
    scanf("%d", &pontosturisticos1);

    // Aqui começa a entrada de dados da carta 2
    printf("Informe o estado da cidade da segunda carta: \n");
    scanf(" %c", &estado2);

    printf("Informe o código da segunda carta: \n");
    scanf("%s", codigo2);

    printf("Informe o nome da segunda cidade: \n");
    scanf("%s", nome2);

    printf("Informe a população da segunda cidade: \n");
    scanf("%d", &populacao2);

    printf("Informe a área da segunda cidade (km²): \n");
    scanf("%f", &area2);

    printf("Informe o PIB da segunda cidade: \n");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos da segunda cidade: \n");
    scanf("%d", &pontosturisticos2);

    // Aqui começarei a exibição dos dados para o usuário
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área da cidade: %.2f km²\n", area1);
    printf("PIB da cidade: %.2f bilhões de reais\n", pib1 / 1000000000.0);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área da cidade: %.2f km²\n", area2);
    printf("PIB da cidade: %.2f bilhões de reais\n", pib2 / 1000000000.0);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);

    return 0;
}
