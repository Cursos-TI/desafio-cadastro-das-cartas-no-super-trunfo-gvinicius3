#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibpercapta1, pibpercapta2;
    float superpoder1, superpoder2;

    // Por advento de curiosidade, no momento em que escrevo esse código, estou usando as cidades "Fortaleza" e "Curitiba".   
    // Aqui começaa a entrada de dados da carta 1
    printf("Informe o estado da cidade da primeira carta: \n");
    scanf(" %c", &estado1);

    printf("Informe o código da primeira carta: \n");
    scanf("%s", codigo1); 

    printf("Informe o nome da primeira cidade: \n");
    scanf("%s", nome1); 

    printf("Informe a população da primeira cidade: \n");
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

    printf("Informe a área da segunda cidade (km²): \n");
    scanf("%f", &area2);

    printf("Informe o PIB da segunda cidade: \n");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos da segunda cidade: \n");
    scanf("%d", &pontosturisticos2);

    densidadePopulacional1 = populacao1 / area1;
    pibpercapta1 = pib1 / populacao1;

    densidadePopulacional2 = populacao2 / area2;
    pibpercapta2 = pib2 / populacao2;

    // Cálculo do Super Poder
    superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapta1 + (1 / densidadePopulacional1);
    superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapta2 + (1 / densidadePopulacional2);

    // Aqui comçarei a exibição dos dados para o usuário
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área da cidade: %.2f km²\n", area1);
    printf("PIB da cidade: %.2f bilhões de reais\n", pib1 / 1000000000.0);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapta1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área da cidade: %.2f km²\n", area2);
    printf("PIB da cidade: %.2f bilhões de reais\n", pib2 / 1000000000.0);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapta2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Começando as comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapta1 > pibpercapta2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}
