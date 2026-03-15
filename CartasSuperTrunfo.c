#include <stdio.h>
  
int main(){
// Dados da Primeira Carta
  char estado1;
  char codigo1[4];
  char cidade1[51];
  int populacao1;
  float area1;
  float PIB1;
  int NPT1;
  float densidade1, pibPerCapita1;
  float superPoder1;
// Dados da Segunda carta
  char cidade2[51]; 
  char codigo2[4];
  char estado2;
  int populacao2;
  float area2;
  float PIB2;
  int NPT2;
  float densidade2, pibPerCapita2;
  float superPoder2;
// Dados dos Resultados
int resultadoPopulacao, resultadoArea, resultadoPIB, resultadoNPT, resultadoPibPerCapita, resultadoDensidade;
int resultadoSuperPoder;
//Avisos sobre o jogo
  printf("============================================================================\n");
  printf("| Use Dados Reais Dos Estados ou Cidades Para Uma Melhor Experiência 😎👍\n");
  printf("| 🛑 INFO: NÃO use vírgulas. Use PONTO para decimais.\n");
  printf("| Exemplo: PIB 62.8 | Área 352212\n");                               
  printf("============================================================================\n");
//Cadastro da Primeira Carta
printf("🃏 Dados da Primeira Carta 🃏 \n");

printf("Digite o Estado da sua carta (A-H)🧩: \n");
scanf(" %c", &estado1);

printf("Digite o Código da Carta 🌐: \n");
scanf("%s", codigo1);

printf("Digite a Cidade Da Carta 🌃: \n");
scanf("%s", cidade1);

printf("Digite a População Da Carta 🏠: \n");
scanf("%d", &populacao1);

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
  scanf("%d", &populacao2);

  printf("Digite o PIB Da Carta 📈: \n");
  scanf("%f", &PIB2);

  printf("Digite a Área(em km²) Da Carta 📐: \n");
  scanf("%f", &area2);

  printf("Digite o Número de Pontos Turísticos da Carta 🛫: \n");
  scanf("%i", &NPT2);
// Calculo das Cartas 1 e 2, E Comparações entre elas
  densidade1 = (float) populacao1 / area1;
  pibPerCapita1 = (PIB1 * 1000000000) / populacao1;
  superPoder1 = (float)populacao1 + area1 + PIB1 + NPT1 + pibPerCapita1 + (1.0 / densidade1);
  densidade2 = (float) populacao2 / area2;
  pibPerCapita2 = (PIB2 * 1000000000) / populacao2;
  superPoder2 = (float)populacao2 + area2 + PIB2 + NPT2 + pibPerCapita2 + (1.0 / densidade2);
  resultadoPopulacao = populacao1 > populacao2;
  resultadoPIB = PIB1 > PIB2;
  resultadoArea = area1 > area2;
  resultadoNPT = NPT1 > NPT2;
  resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
  resultadoDensidade = densidade1 < densidade2;
// Comparação Do Super Poder Da Carta 1 e 2 
  resultadoSuperPoder = superPoder1 > superPoder2; 
// Dados da Primeira Carta Cadastrada
  printf("🃏 Carta 1 🃏:\n");
  printf("Estado 🧩: %c\n", estado1);
  printf("Código 🌐: %c%s\n", estado1, codigo1);
  printf("Nome da Cidade 🌃: %s\n", cidade1);
  printf("População 🏠: %d\n", populacao1);
  printf("PIB 📈: %.2f Bilhões\n", PIB1);
  printf("Área 📐: %.2f km²\n", area1);
  printf("Quantidade de Pontos Turísticos 🛫: %i\n", NPT1);
  printf("Densidade Populacional 🚻: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita 💲: %.2f Reais\n",pibPerCapita1);
// Dados da Segunda Carta Cadastrada
  printf("🃏 Carta 2 🃏:\n");
  printf("Estado 🧩: %c\n", estado2);
  printf("Código 🌐: %c%s\n", estado2, codigo2);
  printf("Nome da Cidade 🌃: %s\n", cidade2);
  printf("População 🏠: %d\n", populacao2);
  printf("PIB 📈: %.2f Bilhões\n", PIB2);
  printf("Área 📐: %.2f km²\n", area2);
  printf("Quantidade de Pontos Turísticos 🛫: %i\n", NPT2);
  printf("Densidade Populacional 🚻: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita 💲: %.2f Reais\n",pibPerCapita2);
  // Resultado das Cartas 
  printf("🛑 INFO 🛑\n Se nos resultados aparecer o '1' significa que a Primeira Carta venceu e o '0' a Segunda Carta venceu\n");
  printf("Resultado da Comparação Das Cartas🃏\n");
  printf("Resultado da Comparação da População 🏠: %d\n", resultadoPopulacao);
  printf("Resultado da Comparação da Área 📐: %d\n", resultadoArea);
  printf("Resultado da Comparação da Quantidade de Pontos Turísticos 🛬: %d\n", resultadoNPT);
  printf("Resultado da Comparação da Densidade Populacional 🚻: %d\n", resultadoDensidade);
  printf("Resultado da Comparação da Pib per Capita 💲 : %d\n", resultadoPibPerCapita);
  printf("Resultado da Comparação Dos Super Poderes 💪: %d\n", resultadoSuperPoder);
  
  return 0;

}