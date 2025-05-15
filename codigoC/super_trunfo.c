#include <stdio.h>

int main(){

    char estado;
    char codigo[4]; 
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int turista; 

    printf("Digite os dados para a carta 1: \n");
    printf("Digite um dos 8 estados usando uma letra de 'A' a 'H' para representá-lo: ");
    scanf(" %c", &estado); 
    
    printf("Digite a letra do estado seguida de um número de 01 a 04 para ser o código da carta: ");
    scanf("%s", codigo); 

    printf("Digite o nome da cidade (não use espaços): ");
    scanf("%s", cidade);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turista);


    char estado1;
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int turista1; 

    printf("\nDigite os dados para a carta 2: \n");
    printf("Digite um dos 8 estados usando uma letra de 'A' a 'H' para representá-lo: ");
    scanf(" %c", &estado1); 
    
    printf("Digite a letra do estado seguida de um número de 01 a 04 para ser o código da carta: ");
    scanf("%s", codigo1); 

    printf("Digite o nome da cidade (não use espaços): ");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turista1);

    
    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmeros de pontos turísticos: %d\n", estado, codigo, cidade, populacao, area, pib, turista);

    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmeros de pontos turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1, turista1);

    return 0;
}