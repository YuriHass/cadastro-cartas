#include <stdio.h>
#include <string.h>

float calculate_density(int population, float area) {
  return population / area;
}

float calculate_gdp_per_capita(float gdp, int population) {
  return (gdp * 1000000000.0f) / population;
}

float calculate_super_power(unsigned long int population, float area, float gdp, int attractions, float gdp_per_capita, float density) {
    return population + area + gdp + attractions + gdp_per_capita + (1000000.0f / density);
}

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char card_1_state, card_2_state;
  char card_1_code[4], card_2_code[4], card_1_name[50], card_2_name[50];
  unsigned long int card_1_population, card_2_population;
  int card_1_tourist_attractions, card_2_tourist_attractions;
  float card_1_area, card_2_area, card_1_gdp, card_2_gdp, card_1_density, card_2_density, card_1_gdp_capita, card_2_gdp_capita, card_1_super_power, card_2_super_power;
  short comparison_result, winner_card;

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
  scanf("%f", &card_1_gdp);

  printf("Insira a numero de pontos turisticos da cidade: ");
  scanf("%d", &card_1_tourist_attractions);

  card_1_density = calculate_density(card_1_population, card_1_area);
  card_1_gdp_capita = calculate_gdp_per_capita(card_1_gdp, card_1_population);
  card_1_super_power = calculate_super_power(card_1_population, card_1_area, card_1_gdp, card_1_tourist_attractions, card_1_gdp_capita, card_1_density);

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
  scanf("%f", &card_2_gdp);

  printf("Insira a numero de pontos turisticos da cidade: ");
  scanf("%d", &card_2_tourist_attractions);

  card_2_density = calculate_density(card_2_population, card_2_area);
  card_2_gdp_capita = calculate_gdp_per_capita(card_2_gdp, card_2_population);
  card_2_super_power = calculate_super_power(card_2_population, card_2_area, card_2_gdp, card_2_tourist_attractions, card_2_gdp_capita, card_2_density);

  // Área para exibição dos dados das cidades
  printf("\nCidades cadastradas com sucesso!\n\n");
  printf("Carta 1: \n");
  printf("Código: %s\n", card_1_code);
  printf("Estado: %c\n", card_1_state);
  printf("Nome da Cidade: %s\n", card_1_name);
  printf("População: %ld\n", card_1_population);
  printf("Área: %.2f km²\n", card_1_area);
  printf("PIB: %.2f bilhões de reais\n", card_1_gdp);
  printf("Número de pontos turísticos : %d\n", card_1_tourist_attractions);
  printf("Densidade populacional: %.2f hab/km²\n", card_1_density);
  printf("PIB per Capita: %.2f reais\n", card_1_gdp_capita);
  printf("Super poder: %.6f\n", card_1_super_power);
  
  printf("\nCarta 2: \n");
  printf("Código: %s\n", card_2_code);
  printf("Estado: %c\n", card_2_state);
  printf("Nome da Cidade: %s\n", card_2_name);
  printf("População: %ld\n", card_2_population);
  printf("Área: %.2f km²\n", card_2_area);
  printf("PIB: %.2f bilhões de reais\n", card_2_gdp);
  printf("Número de pontos turísticos : %d\n", card_2_tourist_attractions);
  printf("Densidade populacional: %.2f hab/km²\n", card_2_density);
  printf("PIB per Capita: %.2f reais\n", card_2_gdp_capita);
  printf("Super poder: %.6f\n", card_2_super_power);

  // Área para comparação dos dados entre as cidades
  printf("\nHora de comparar as cartas!\n\n");

  comparison_result = card_1_population > card_2_population;
  winner_card = 2 - comparison_result;
  printf("População: Carta %hd venceu (%hd)\n", winner_card, comparison_result);

  comparison_result = card_1_area > card_2_area;
  winner_card = 2 - comparison_result;
  printf("Área: Carta %hd venceu (%hd)\n", winner_card, comparison_result);

  comparison_result = card_1_gdp > card_2_gdp;
  winner_card = 2 - comparison_result;
  printf("PIB: Carta %hd venceu (%hd)\n", winner_card, comparison_result);

  comparison_result = card_1_tourist_attractions > card_2_tourist_attractions;
  winner_card = 2 - comparison_result;
  printf("Pontos Turísticos: Carta %hd venceu (%hd)\n", winner_card, comparison_result);

  comparison_result = card_1_density < card_2_density;
  winner_card = 2 - comparison_result;
  printf("Densidade populacional: Carta %hd venceu (%hd)\n", winner_card, comparison_result);

  comparison_result = card_1_gdp_capita > card_2_gdp_capita;
  winner_card = 2 - comparison_result;
  printf("PIB per Capita: Carta %hd venceu (%hd)\n", winner_card, comparison_result);

  comparison_result = card_1_super_power > card_2_super_power;
  winner_card = 2 - comparison_result;
  printf("Super poder: Carta %hd venceu (%hd)\n", winner_card, comparison_result);


  return 0;
}