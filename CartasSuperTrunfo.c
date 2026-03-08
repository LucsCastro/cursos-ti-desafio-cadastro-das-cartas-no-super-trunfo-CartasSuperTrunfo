#include <stdio.h>
  
int main(){
// Dados da Primeira Carta
  char estado1;
  char codigo1[4];
  char cidade1[51];
  int população1;
  float area1;
  float PIB1;
  int NPT1;
  float densidade1, pibPerCapita1;
// Dados da Segunda carta
  char cidade2[51]; 
  char codigo2[4];
  char estado2;
  int população2;
  float area2;
  float PIB2;
  int NPT2;
  float densidade2, pibPerCapita2;
//Cadastro da Primeira Carta
printf("🃏 Dados da Primeira Carta 🃏 \n");

printf("Digite o Estado da sua carta (A-H)🧩: \n");
scanf(" %c", &estado1);

printf("Digite o Código da Carta 🌐: \n");
scanf("%s", codigo1);

printf("Digite a Cidade Da Carta 🌃: \n");
scanf("%s", cidade1);

printf("Digite a População Da Carta 🏠: \n");
scanf("%d", &população1);

printf("Digite o PIB Da Carta 📈: \n");
scanf("%f", &PIB1);

printf("Digite a Área(em km²) Da Carta 📐: \n");
scanf("%f", &area1);

printf("Digite o Número de Pontos Turísticos da Carta 🛫: \n");
scanf("%i", &NPT1);

// Cadastro Da Segunda Carta
  printf("🃏 Dados da Segunda Carta 🃏 \n");
  
  printf("Digite o Estado da sua carta (A-H)🧩: \n");
  scanf(" %c", &estado2); 

  printf("Digite o Código da Carta 🌐: \n");
  scanf("%s", codigo2);

  printf("Digite a Cidade Da Carta 🌃: \n"); 
  scanf("%s", cidade2);

  printf("Digite a População Da Carta 🏠: \n");
  scanf("%d", &população2);

  printf("Digite o PIB Da Carta 📈: \n");
  scanf("%f", &PIB2);

  printf("Digite a Área(em km²) Da Carta 📐: \n");
  scanf("%f", &area2);

  printf("Digite o Número de Pontos Turísticos da Carta 🛫: \n");
  scanf("%i", &NPT2);
// Calculo da Densidade e PIB per Capita
  densidade1 = (float) população1 / area1;
  pibPerCapita1 = (PIB1 * 1000000000) / população1;
  densidade2 = (float) população2 / area2;
  pibPerCapita2 = (PIB2 * 1000000000) / população2;

// Dados da Primeira Carta Cadastrada
  printf("🃏 Carta 1 🃏: \n");
  printf("Estado 🧩: %c \n", estado1);
  printf("Código 🌐: %c%s \n", estado1, codigo1);
  printf("Nome da Cidade 🌃: %s \n", cidade1);
  printf("População 🏠: %d \n", população1);
  printf("PIB 📈: %.2f Bilhões\n", PIB1);
  printf("Área 📐: %.2f km² \n", area1);
  printf("Número de Pontos Turísticos 🛫: %i \n", NPT1);
  printf("Densidade Populacional 🚻: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita 💲: %.2f Reais \n",pibPerCapita1);
// Dados da Segunda Carta Cadastrada
  printf("🃏 Carta 2 🃏: \n");
  printf("Estado 🧩: %c \n", estado2);
  printf("Código 🌐: %c%s \n", estado2, codigo2);
  printf("Nome da Cidade 🌃: %s \n", cidade2);
  printf("População 🏠: %d \n", população2);
  printf("PIB 📈: %.2f Bilhões\n", PIB2);
  printf("Área 📐: %.2f km² \n", area2);
  printf("Número de Pontos Turísticos 🛫: %i \n", NPT2);
  printf("Densidade Populacional 🚻: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita 💲: %.2f Reais \n",pibPerCapita2);
  
  
  return 0;

}