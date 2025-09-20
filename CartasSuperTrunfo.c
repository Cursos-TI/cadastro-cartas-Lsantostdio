#include <stdio.h>

int main(){

    // Adição das variáveis da cidade 01
    char estado = 'R';
    char cod_cidade [10] = "R01";
    char nome_cidade [30] = "RioDeJaneiro";
    int populacao = 6211.223;
    float area_km² = 1200.330;
    float PIB = 53078.23;
    int pts_turisticos = 13; 

    // Mensangem de boas - vindas 
    printf("Desafio Super Trunfo Nível Novato - CIDADE_RJOTA\n");

    /* Definição das funções de entrada e saída: (printf- saída) / (scanf - entrada) */
    printf("Digite a primeira a letra do nome da estado: ");
    scanf("%c", &estado);
    printf(" O primeira letra do nome da cidade é: %c\n", estado);

    // Digitação do código da cidade
    printf("Digite o código da cidade");
    scanf("%s", cod_cidade);
    printf("O código da cidade é: %s\n", cod_cidade);

    // Digitaçãp do nome da cidade
    printf("Digite o nome da cidade, conhecida como Cidade Maravilhosa: ");
    scanf("%s", nome_cidade);
    printf("O nome da cidade é %s\n", nome_cidade);

    // Digitação da quantidade de habitantes da cidade
    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao);
    printf("A quantidade da população da Cidade do Rio de Janeiro é: %d\n", populacao);








}