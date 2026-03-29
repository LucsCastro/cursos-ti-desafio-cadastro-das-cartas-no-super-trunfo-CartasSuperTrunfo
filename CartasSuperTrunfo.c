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
  //Variaveis de Controle
  int opcaomenu;
  int jogarNovamente;
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
//
//Inicio Do Loop ' Do '
//
//MENU Comparações individuais das Cartas
do
{
printf("Cartas Super Trunfo 🃏\n");
printf("============================================================================\n");
printf("| ⬇ Escolha Quais atributos deseja comparar ⬇\n");
printf("| 1. População 🏠\n");
printf("| 2. Área 📐\n");
printf("| 3. Pib 📈\n");
printf("| 4. Pontos turísticos 🛬\n");
printf("| 5. Densidade Populacional (Vence o Menor!)🚻\n");
printf("| 6. Pib Per Capita 💲\n");
printf("| 7. Super Poder 💪\n");
printf("| 8. Comparar Todos os Atributos 📊\n");
printf("| Digite o Número de sua Opção ➡ a");
scanf("%d", &opcaomenu);
printf("============================================================================\n");

// Dados da Primeira Carta Cadastrada
  printf("🃏 Carta 1 🃏:\n");
  printf("============================================================================\n");
  printf("| Estado 🧩: %c\n", estado1);
  printf("| Código 🌐: %c%s\n", estado1, codigo1);
  printf("| Nome da Cidade 🌃: %s\n", cidade1);
  printf("| População 🏠: %d\n", populacao1);
  printf("| PIB 📈: %.2f Bilhões\n", PIB1);
  printf("| Área 📐: %.2f km²\n", area1);
  printf("| Quantidade de Pontos Turísticos 🛫: %i\n", NPT1);
  printf("| Densidade Populacional 🚻: %.2f hab/km²\n", densidade1);
  printf("| PIB per Capita 💲: %.2f Reais\n",pibPerCapita1);
  printf("============================================================================\n");
// Dados da Segunda Carta Cadastrada
  printf("🃏 Carta 2 🃏:\n");
  printf("============================================================================\n");
  printf("| Estado 🧩: %c\n", estado2);
  printf("| Código 🌐: %c%s\n", estado2, codigo2);
  printf("| Nome da Cidade 🌃: %s\n", cidade2);
  printf("| População 🏠: %d\n", populacao2);
  printf("| PIB 📈: %.2f Bilhões\n", PIB2);
  printf("| Área 📐: %.2f km²\n", area2);
  printf("| Quantidade de Pontos Turísticos 🛫: %i\n", NPT2);
  printf("| Densidade Populacional 🚻: %.2f hab/km²\n", densidade2);
  printf("| PIB per Capita 💲: %.2f Reais\n",pibPerCapita2);
  printf("============================================================================\n"); 
  //Switch Pra decidir qual comparação efetuar
switch (opcaomenu)
{
case 1:
 printf("Comparando A População 🏠\n");
  if (populacao1 > populacao2)
{
printf("Carta %s Venceu 🎉\n", cidade1);
}else if (populacao1 < populacao2)
{
printf("Carta %s Venceu 🎉\n", cidade2);
}else
{
printf("Empatou 🔃\n");
}
  break;

case 2:
 printf("Comparando A Área 📐\n");
  if (area1 > area2)
{
printf("Carta %s Venceu 😜🎉\n", cidade1);
}else if (area1 < area2)
{
printf("Carta %s Venceu 😜🎉\n", cidade2);
}else
{
printf("Empatou 🔃\n");
}
  break;

case 3:
 printf("Comparando O Pib 📈\n");
  if (PIB1 > PIB2)
{
printf("Carta %s Venceu 😁🎉\n", cidade1);
}else if (PIB1 < PIB2)
{
printf("Carta %s Venceu 😁🎉\n", cidade2);
}else
{
printf("Empatou 🔃\n");
}
  break;

case 4:
 printf("Comparando os Pontos Turísticos 🛬\n");
  if (NPT1 > NPT2)
{
printf("Carta %s Venceu 🥱🎉\n", cidade1);
}else if (NPT1 < NPT2)
{
printf("Carta %s Venceu 🥱🎉\n", cidade2);
}else
{
printf("Empatou 🔃\n");
}
  break;

case 5:
 printf("Comparando a Densidade Populacional (A Menor Vence!) 🚻\n");
  if (densidade1 < densidade2)
{
printf("Carta %s Venceu 😎🎉\n", cidade1);
}else if (densidade1 > densidade2)
{
printf("Carta %s Venceu 😎🎉\n", cidade2);
}else
{
printf("Empatou 🔃\n");
}
  break;

case 6:
 printf("Comparando O Pib Per Capita 💲\n");
  if (pibPerCapita1 > pibPerCapita2)
{
printf("Carta %s Venceu 😳🕶🤏\n", cidade1);
}else if (pibPerCapita1 < pibPerCapita2)
{
printf("Carta %s Venceu 😳🕶🤏\n", cidade2);
}else
{
printf("Empatou 🔃\n");
}
  break;

case 7:
 printf("Comparando o Super Poder 💪\n");
  if (superPoder1 > superPoder2)
{
printf("Carta %s Venceu ✋😬🤚\n", cidade1);
}else if (superPoder1 < superPoder2)
{
printf("Carta %s Venceu ✋😬🤚\n", cidade2);
}else
{
printf("Empatou 🔃\n");
}
 break;

case 8:
 printf("Comparando Todos os Atributos 📊\n");
  if (populacao1 > populacao2)
{
printf("Carta %s Venceu a Primeira Rodada 🎉\n", cidade1);
}else if (populacao1 < populacao2)
{
printf("Carta %s Venceu a Primeira Rodada 🎉\n", cidade2);
}else
{
printf("A Primeira Rodada Empatou 🔃\n");
}

if (PIB1 > PIB2)
{
printf("Carta %s Venceu a Segunda Rodada 😁🎉\n", cidade1);
}else if (PIB1 < PIB2)
{
printf("Carta %s Venceu a Segunda Rodada 😁🎉\n", cidade2);
}else
{
printf("A Segunda Rodada Empatou 🔃\n");
}

if (area1 > area2)
{
printf("Carta %s Venceu a Terceira Rodada 😜🎉\n", cidade1);
}else if (area1 < area2)
{
printf("Carta %s Venceu a Terceira Rodada 😜🎉\n", cidade2);
}else
{
printf("A Terceira Rodada Empatou 🔃\n");
}

if (NPT1 > NPT2)
{
printf("Carta %s Venceu a Quarta Rodada 🥱🎉\n", cidade1);
}else if (NPT1 < NPT2)
{
printf("Carta %s Venceu a Quarta Rodada 🥱🎉\n", cidade2);
}else
{
printf("A Quarta Rodada Empatou 🔃\n");
}

if (densidade1 < densidade2)
{
printf("Carta %s Venceu a Quinta Rodada 😎🎉\n", cidade1);
}else if (densidade1 > densidade2)
{
printf("Carta %s Venceu a Quinta Rodada 😎🎉\n", cidade2);
}else
{
printf("A Quinta Rodada Empatou 🔃\n");
}

if (pibPerCapita1 > pibPerCapita2)
{
printf("Carta %s Venceu a Sexta Rodada 😳🕶🤏\n", cidade1);
}else if (pibPerCapita1 < pibPerCapita2)
{
printf("Carta %s Venceu a Sexta Rodada 😳🕶🤏\n", cidade2);
}else
{
printf("A Sexta Rodada Empatou 🔃\n");
}

if (superPoder1 > superPoder2)
{
printf("Carta %s Venceu a Setima e Ultima Rodada ✋😬🤚\n", cidade1);
}else if (superPoder1 < superPoder2)
{
printf("Carta %s Venceu a Setima e Ultima Rodada ✋😬🤚\n", cidade2);
} 
 break;

   default:
     printf("🚫 Opção Invalida! Escolha um Número de 1 a 8 ! 🚫\n");
      break;
}
//Pergunta ao usuario se ele quer continuar jogando
printf("\n===========================================================================\n");     
printf("| Deseja fazer outra comparação com essas cartas?\n");
printf("| 1. Sim 😁\n");
printf("| 0. Não 😔(Sair do Jogo)\n");
printf("| ❗ Aviso: Se escolher Sair do Jogo Terá que Cadastrar as Cartas Novamente ❗\n");
printf("| Digite sua opção ➡ ");
scanf("%d", &jogarNovamente);
printf("\n===========================================================================\n");   
} while (jogarNovamente == 1 );
  printf("Obrigado Por Jogar Cartas Super Trunfo! Até a próxima 🃏🎮\n");

  return 0;

}