#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char card_1_state, card_2_state;
  char card_1_code[4], card_2_code[4], card_1_name[50], card_2_name[50];
  int card_1_population, card_2_population, card_1_tourist_attractions, card_2_tourist_attractions;
  float card_1_area, card_2_area, card_1_pib, card_2_pib;

  // Área para entrada de dados da cidade 1
  printf("*****Dados da primeira cidade*****\n");
  printf("Insira o código do estado: ");
  scanf(" %c", &card_1_state);
  snprintf(card_1_code, sizeof(card_1_code), "%c%s", card_1_state, "01");

  getchar(); //remove \n in buffer

  printf("Insira o nome da cidade: ");
  fgets(card_1_name, 50, stdin);
  card_1_name[strcspn(card_1_name, "\n")] = 0;

  printf("Insira a população da cidade: ");
  scanf("%d", &card_1_population);

  printf("Insira a área (km²) da cidade: ");
  scanf("%f", &card_1_area);

  printf("Insira o PIB (bilhões de reais) da cidade: ");
  scanf("%f", &card_1_pib);

  printf("Insira a numero de pontos turisticos da cidade: ");
  scanf("%d", &card_1_tourist_attractions);

  // Área para entrada de dados da cidade 2
  printf("\n*****Dados da segunda cidade*****\n");
  printf("Insira o código do estado: ");
  scanf(" %c", &card_2_state);
  snprintf(card_2_code, sizeof(card_2_code), "%c%s", card_2_state, "01");

  getchar(); //remove \n in buffer

  printf("Insira o nome da cidade: ");
  fgets(card_2_name, 50, stdin);
  card_2_name[strcspn(card_2_name, "\n")] = 0;

  printf("Insira a população da cidade: ");
  scanf("%d", &card_2_population);

  printf("Insira a área (km²) da cidade: ");
  scanf("%f", &card_2_area);

  printf("Insira o PIB (bilhões de reais) da cidade: ");
  scanf("%f", &card_2_pib);

  printf("Insira a numero de pontos turisticos da cidade: ");
  scanf("%d", &card_2_tourist_attractions);

  // Área para exibição dos dados das cidades
  printf("\nCidades cadastradas com sucesso!\n\n");
  printf("Carta 1: \n");
  printf("Código: %s\n", card_1_code);
  printf("Estado: %c\n", card_1_state);
  printf("Nome da Cidade: %s\n", card_1_name);
  printf("População: %d\n", card_1_population);
  printf("Área: %.2f km²\n", card_1_area);
  printf("PIB: %.2f bilhões de reais\n", card_1_pib);
  printf("Número de pontos turísticos : %d\n", card_1_tourist_attractions);
  
  printf("\nCarta 2: \n");
  printf("Código: %s\n", card_2_code);
  printf("Estado: %c\n", card_2_state);
  printf("Nome da Cidade: %s\n", card_2_name);
  printf("População: %d\n", card_2_population);
  printf("Área: %.2f km²\n", card_2_area);
  printf("PIB: %.2f bilhões de reais\n", card_2_pib);
  printf("Número de pontos turísticos : %d\n", card_2_tourist_attractions);
  return 0;
} 
