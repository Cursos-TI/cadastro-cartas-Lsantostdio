#include <stdio.h>

int main(){

    // Adição das variáveis da cidade 01
    char estado_01 = 'R';
    char cod_cidade_01 [10] = "R01";
    char nome_cidade_01 [30] = "Rio";
    int populacao_01 = 6211.223;
    float area_km²_01 = 1200.330;
    float PIB_01 = 53078.23;
    int pts_turisticos_01 = 13; 

    // Mensangem de boas - vindas 
    printf("Desafio Super Trunfo Nível Novato - CIDADE_RJOTA\n\n\n");

    /* Definição das funções de entrada e saída: (printf- saída) / (scanf - entrada) */
    printf("Digite a primeira a letra do nome da estado: ");
    scanf("%c", &estado_01);
    printf(" O primeira letra do nome da cidade é: %c\n\n", estado_01);

    // Digitação do código da cidade
    printf("Digite o código da cidade: ");
    scanf("%s", cod_cidade_01);
    printf("O código da cidade é: %s\n\n", cod_cidade_01);

    // Digitação do nome da cidade
    printf("Digite o nome da cidade, conhecida como Cidade Maravilhosa: ");
    scanf("%s", nome_cidade_01);
    printf("O nome da cidade é %s\n\n", nome_cidade_01);

    // Digitação da quantidade de habitantes da cidade
    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao_01);
    printf("O número populacional da cidade é de: %d milhões\n\n", populacao_01);

    // Digitação da área
    printf("Digite a área km²: ");
    scanf("%f", &area_km²_01);
    printf("O tamanho da área é: %.2f\n\n km²", area_km²_01);

    // Digite o PIB da Cidade
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &PIB_01);
    printf("O PIB da cidade é de: R$ %.2f\n\n", PIB_01);

    //Digite a quantidade de potosturísticos da cidade
    printf("Digite a quatidade de pontos turísticos da cidade: ");
    scanf("%d", &pts_turisticos_01);
    printf("A quatidade de pontos turísticos é: %d\n\n\n\n", pts_turisticos_01);  



    // Adição das variáveis da cidade 02
    char estado_02 = 'S';
    char cod_cidade_02 [10] = "S02";
    char nome_cidade_02 [30] = "SAL";
    int populacao_02 = 2417.678;
    float area_km²_02 = 692.589;
    float PIB_02 = 21706.06;
    int pts_turisticos_02 = 5; 

    // Mensangem de boas - vindas 
    printf("Desafio Super Trunfo Nível Novato - CIDADE_DO_CARNAVAL\n\n\n");

    /* Definição das funções de entrada e saída: (printf- saída) / (scanf - entrada) */
    printf("Digite a primeira a letra do nome da estado: ");
    scanf("%c", &estado_02);
    printf(" O primeira letra do nome da cidade é: %c\n\n", estado_02);

    // Digitação do código da cidade
    printf("Digite o código da cidade: ");
    scanf("%s", cod_cidade_02);
    printf("O código da cidade é: %s\n\n", cod_cidade_02);

    // Digitaçãp do nome da cidade
    printf("Digite o nome da cidade, conhecida como Cidade do Carnaval: ");
    scanf("%s", nome_cidade_02);
    printf("O nome da cidade é %s\n\n", nome_cidade_02);

    // Digitação da quantidade de habitantes da cidade
    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao_02);
    printf("O número populacional da cidade é de: %d milhões\n\n", populacao_02);

    // Digitação da área
    printf("Digite a área km²: ");
    scanf("%f", &area_km²_02);
    printf("O tamanho da área é: %.2f\n\n km²", area_km²_02);

    // Digite o PIB da Cidade
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &PIB_02);
    printf("O PIB da cidade é de: R$ %.2f\n\n", PIB_02);

    //Digite a quantidade de potosturísticos da cidade
    printf("Digite a quatidade de pontos turísticos da cidade: ");
    scanf("%d", &pts_turisticos_02);
    printf("A quatidade de pontos turísticos é: %d\n\n", pts_turisticos_02);


    return 0;

}