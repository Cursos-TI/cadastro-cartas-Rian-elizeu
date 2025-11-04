#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {                                   // Área para definição das variáveis para armazenar as propriedades das cidades
  int carta1, carta2;
  char estado1[50], estado2[50];
  char codigo1[50], codigo2[50];
  char cidade1[50], cidade2[50];
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int ponto_turistico1, ponto_turistico2;
  float densidade_populacional1, pib_per_capita1, densidade_populacional2, pib_per_capita2;
  float superpoder1, superpoder2;                       

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

   superpoder1 = (float)populacao1 + area1 + pib1 + ponto_turistico1 + pib_per_capita1 + densidade_populacional1;

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

  superpoder2 = populacao2 + area2 + pib2 + ponto_turistico2 + pib_per_capita2 + densidade_populacional2;
 
  
  //Área para exibição dos dados da cidade
  printf("====================================== \n");     
  printf("         COMPARAÇÃO DAS CARTAS \n");              //bloco de comparação dos dados inseridos pelo usuario

  if(populacao1 > populacao2){
    printf("     POPULAÇÃO \n");
    printf("CARTA1: %u \n", populacao1);
    printf("CARTA2: %u \n", populacao2);
    printf("CARTA1 venceu!! \n");
    printf("------------------ \n");
  } else {
    printf("    POPULAÇÃO \n");
    printf("CARTA1: %u \n", populacao1);
    printf("CARTA2: %u \n", populacao2);
    printf("CARTA2 venceu!! \n");
    printf("-------------------- \n");

  } if(area1 > area2){
    printf("      AREA \n");
    printf("CARTA1: %.1f \n", area1);
    printf("CARTA2: %.1f \n", area2);
    printf("CARTA1 venceu!! \n");
    printf("----------------- \n");
  } else {
    printf("      AREA \n");
    printf("CARTA1: %.1f \n", area1);
    printf("CARTA2: %.1f \n", area2);
    printf("CARTA2 venceu!! \n");
    printf("------------------ \n");

  } if(pib1 > pib2){
    printf("       PIB \n");
    printf("CARTA1: %.1f \n", pib1);
    printf("CARTA2: %.1f \n", pib2);
    printf("CARTA1 venceu!! \n");
    printf("----------------- \n");
  } else {
    printf("       PIB \n");
    printf("CARTA1: %.1f \n", pib1);
    printf("CARTA2: %.1f \n", pib2);
    printf("CARTA2 venceu!! \n");
    printf("----------------- \n");

  } if(ponto_turistico1 > ponto_turistico2){
    printf("   PONTO TURISTICO \n");
    printf("CARTA1: %d \n", ponto_turistico1);
    printf("CARTA2: %d \n", ponto_turistico2);
    printf("CARTA1 venceu!! \n");
    printf("---------------------- \n");
  } else {
    printf("   PONTO TURISTICO \n");
    printf("CARTA1: %d \n", ponto_turistico1);
    printf("CARTA2: %d \n", ponto_turistico2);
    printf("CARTA2 venceu!! \n");
    printf("---------------------- \n");

  } if(densidade_populacional1 > densidade_populacional2){
    printf("   DENSIDADE POPULACIONAL \n ");
    printf("CARTA1: %.1f \n", densidade_populacional1);
    printf("CARTA2: %.1f \n", densidade_populacional2);
    printf("CARTA1 venceu!! \n");
    printf("---------------------- \n");
  }else {
    printf("   DENSIDADE POPULACIONAL \n ");
    printf("CARTA1: %.1f \n", densidade_populacional1);
    printf("CARTA2: %.1f \n", densidade_populacional2);
    printf("CARTA2 venceu!! \n");
    printf("---------------------- \n");
  } if(pib_per_capita1 > pib_per_capita2){
    printf("   PIB PER CAPITA \n");
    printf("CARTA1: %.1f \n", pib_per_capita1);
    printf("CARTA2: %.1f \n", pib_per_capita2);
    printf("CARTA1 venceu!! \n");
    printf("---------------------- \n");
  }else {
    printf("   PIB PER CAPITA \n");
    printf("CARTA1: %.1f \n", pib_per_capita1);
    printf("CARTA2: %.1f \n", pib_per_capita2);
    printf("CARTA2 venceu!! \n");
    printf("---------------------- \n");
    } if(superpoder1 > superpoder2){
      printf("    SUPER PODER \n");
      printf("CARTA1: %.1f \n", superpoder1);
      printf("CARTA2: %.1f \n", superpoder2);
      printf("CARTA1 venceu!! \n");
      printf("--------------------- \n");
    }else{
      printf("    SUPER PODER \n");
      printf("CARTA1: %.1f \n", superpoder1);
      printf("CARTA2: %.1f \n", superpoder2);
      printf("CARTA2 venceu!! \n");
      printf("--------------------- \n");
    }


  /*printf("população: carta 1 venceu (%u) \n", populacao1 > populacao2);
  printf("area: carta 1 venceu (%.1f) \n", area1 > area2);
  printf("pib: carta 1 venceu (%.1f) \n", pib1 > pib2);
  printf("ponto turistico: carta 1 venceu (%d) \n", ponto_turistico1 > ponto_turistico2);
  printf("densidade populacional: carta 2 venceu (%.1f) \n", densidade_populacional1 > densidade_populacional2);
  printf("pib per capita: carta 1 venceu (%.1f) \n", pib_per_capita1 > pib_per_capita2);
  printf("super poder: carta 1 vence (%.1f) \n", superpoder1 > superpoder2);
  printf("======================================= \n");*/

return 0;
} 
