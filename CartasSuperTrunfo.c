#include <stdio.h>
#include <string.h>

float calculate_density(int population, float area) {
  return population / area;
}

float calculate_pib_per_capita(float pib, int population) {
  return (pib * 1000000000.0f) / population;
}

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char card_1_state, card_2_state;
  char card_1_code[4], card_2_code[4], card_1_name[50], card_2_name[50];
  unsigned long int card_1_population, card_2_population;
  int card_1_tourist_attractions, card_2_tourist_attractions;
  float card_1_area, card_2_area, card_1_pib, card_2_pib, card_1_density, card_2_density, card_1_pib_capita, card_2_pib_capita;

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
  scanf("%ld", &card_1_population);

  printf("Insira a área (km²) da cidade: ");
  scanf("%f", &card_1_area);

  printf("Insira o PIB (bilhões de reais) da cidade: ");
  scanf("%f", &card_1_pib);

  printf("Insira a numero de pontos turisticos da cidade: ");
  scanf("%d", &card_1_tourist_attractions);

  card_1_density = calculate_density(card_1_population, card_1_area);
  card_1_pib_capita = calculate_pib_per_capita(card_1_pib, card_1_population);

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
  scanf("%ld", &card_2_population);

  printf("Insira a área (km²) da cidade: ");
  scanf("%f", &card_2_area);

  printf("Insira o PIB (bilhões de reais) da cidade: ");
  scanf("%f", &card_2_pib);

  printf("Insira a numero de pontos turisticos da cidade: ");
  scanf("%d", &card_2_tourist_attractions);

  card_2_density = calculate_density(card_2_population, card_2_area);
  card_2_pib_capita = calculate_pib_per_capita(card_2_pib, card_2_population);

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
  printf("Densidade populacional: %.2f hab/km²\n", card_1_density);
  printf("PIB per Capita: %.2f reais\n", card_1_pib_capita);
  
  printf("\nCarta 2: \n");
  printf("Código: %s\n", card_2_code);
  printf("Estado: %c\n", card_2_state);
  printf("Nome da Cidade: %s\n", card_2_name);
  printf("População: %d\n", card_2_population);
  printf("Área: %.2f km²\n", card_2_area);
  printf("PIB: %.2f bilhões de reais\n", card_2_pib);
  printf("Número de pontos turísticos : %d\n", card_2_tourist_attractions);
  printf("Densidade populacional: %.2f hab/km²\n", card_2_density);
  printf("PIB per Capita: %.2f reais\n", card_2_pib_capita);
  return 0;
}