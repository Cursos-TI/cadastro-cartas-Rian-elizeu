#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {                                   // Área para definição das variáveis para armazenar as propriedades das cidades
  int carta1, carta2;
  char estado1[50], estado2[50];
  char codigo1[50], codigo2[50];
  char cidade1[50], cidade2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int ponto_turistico1, ponto_turistico2;
  double densidade_populacional1, pib_per_capita1, densidade_populacional2, pib_per_capita2;
                         

  printf("             SUPER TRUNFO        \n");               // Área para entrada de dados
  printf("===================================== \n");
  printf("insira o numero da primeira carta: \n");
  scanf("%d", &carta1);

  printf("insira o nome do estado da carta 1: ");
  scanf(" %[^\n]", estado1);

  printf("insira o codigo da carta 1: \n");
  scanf("%s", &codigo1);

  printf("insira o nome da cidade da carta 1: ");
  scanf(" %[^\n]", cidade1);

  printf("insira o numero da população da carta 1: \n");
  scanf("%d", &populacao1);

  printf("insira a area da carta 1: \n ");
  scanf("%f", &area1);

  printf("insira o PIB da carta 1: \n ");
  scanf(" %f", &pib1);

  printf("insira o numero de pontos turisticos da carta 1: \n");
  scanf("%d", &ponto_turistico1);

   densidade_populacional1 = populacao1 / area1;

   pib_per_capita1 = populacao1 / pib1;

  printf("insira o numero da segunda carta: \n");
  scanf("%d", &carta2);

  printf("insira o nome do estado da carta 2: ");
  scanf(" %[^\n]", estado2);

  printf("insira o codigo da carta 2: \n");
  scanf("%s", &codigo2);

  printf("insira o nome da cidade da carta 2: ");
  scanf(" %[^\n]", cidade2);

  printf("insira o numero da população da carta 2: \n");
  scanf("%d", &populacao2);

  printf("insira a area da carta 2: \n");
  scanf(" %f", &area2);

  printf("insira o PIB da carta 2: \n");
  scanf(" %f", &pib2);

  printf("insira o numero de pontos turisticos da carta 2: \n");
  scanf("%d", &ponto_turistico2);

  densidade_populacional2 = populacao2 / area2;

  pib_per_capita2 = populacao2 / pib2;
 


  printf("====================================== \n");     // Área para exibição dos dados da cidade
  printf("           DADOS INSERIDOS \n");
  printf("Carta: %d\n", carta1);
  printf("Estado: %s\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Numero de pontos Turisticos: %d\n", ponto_turistico1);
  printf("Densidade populacional: %.2lf hab/km²\n", densidade_populacional1);
  printf("Pib per capita: %.2lf reais\n", pib_per_capita1);

  printf("====================================== \n");
  printf("====================================== \n");

  printf("Carta: %d\n", carta2);
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Numero de pontos Turisticos: %d\n", ponto_turistico2);
  printf("Densidade populacional: %.2lf hab/km²\n", densidade_populacional2);
  printf("Pib per capita: %.2lf reais\n", pib_per_capita2);
  printf("====================================== \n");


return 0;
} 
