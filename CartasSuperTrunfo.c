#include <stdio.h>



// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Definição das variáreis do Estado 01
  char estado_01 = 'R';
  char codigo_cidade_01 [10] = "R01";
  char cidade_01 [50] = "RiodeJaneiro";
  int ptsturist01 = 8;
  int populacao_01 = 6730729;
  float area_01 = 1.200330;
  float pib_01 = 53.0782;

    // Área para entrada de dados
      printf(" Digite a sigla do primeiro estado: "); 
        scanf("%c", &estado_01);
          printf(" A sigla do primeiro estado é: %c\n", estado_01);

          printf(" Digite o código da cidade 01: ");
          scanf("%s", codigo_cidade_01);
          printf("o código da sua cidade é: %s\n", codigo_cidade_01);




            // Área para exibição dos dados da cidade

            return 0;
            } 
            