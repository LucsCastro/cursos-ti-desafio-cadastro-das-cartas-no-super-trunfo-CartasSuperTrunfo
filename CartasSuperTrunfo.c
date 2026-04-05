#include <stdio.h>
  
int main(){
//Dados da Primeira Carta
  char estado1;
  char codigo1[4];
  char cidade1[51];
  int populacao1;
  float area1;
  float PIB1;
  int NPT1;
  float densidade1, pibPerCapita1;
  float superPoder1;
//Dados da Segunda carta
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
  int voltarMenu;
  int opcaomenu;
  int primOpcao, segOpcao;
  int jogarNovamente;
//Váriaveis para armazenar os valores escolhidos
  float valor1_Atr1, valor2_Atr1;
  float valor1_Atr2, valor2_Atr2;
//Váriaveis de pontuação (Para inverter a densidade)
  float pontuacaoCarta1_Atr1, pontuacaoCarta2_Atr1;
  float pontuacaoCarta1_Atr2, pontuacaoCarta2_Atr2;
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
scanf(" %s", cidade1);

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
  scanf(" %s", cidade2);

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
do{
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
printf("| Digite o Número de sua Opção ➡ ");
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
     continue;
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
  printf("\n🔥 PARABÉNS! VOCÊ DESBLOQUEOU O DESAFIO FINAL! 🔥\n");
  printf("Prepare-se para escolher DOIS atributos de uma vez!\n");
// 1️⃣ MENU DINÂMICO DO PRIMEIRO ATRIBUTO
do{
  printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
  printf("1. <População>\n");
  printf("2. <Área>\n");
  printf("3. <PIB>\n");
  printf("4. <Pontos Turísticos>\n");
  printf("5. <Densidade Demográfica> (Menor vence!)\n");
  printf("Digite sua opção (1-5)➡ ⬅");
  scanf("%d", &primOpcao);
// Tratamento de opção inválida no menu 1
    if (primOpcao < 1 || primOpcao > 5){
    printf("\n🚫 Opção Inválida! Escolha entre 1 e 5.\n");
    continue; // Volta pro início do loop
}
// 2️⃣ MENU DINÂMICO DO SEGUNDO ATRIBUTO (Oculta o que já foi escolhido)
  printf("\nEscolha o SEGUNDO atributo para comparar:\n");
   switch (primOpcao) {
case 1: printf("2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n"); break;
case 2: printf("1. População\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n"); break;
case 3: printf("1. População\n2. Área\n4. Pontos Turísticos\n5. Densidade Demográfica\n"); break;
case 4: printf("1. População\n2. Área\n3. PIB\n5. Densidade Demográfica\n"); break;
case 5: printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n"); break;
}
  printf("Digite sua opção (1-5)➡ ⬅");
  scanf("%d", &segOpcao);
// Tratamento de opção inválida no menu 2
  if (segOpcao < 1 || segOpcao > 5 || segOpcao == primOpcao){
  printf("\n🚫 Opção Inválida! Escolha entre 1 e 5, e diferente da primeira escolha.\n");
  continue;
}
// ATRIBUINDO VALORES DO ATRIBUTO 1
  switch (primOpcao) {
  case 1: valor1_Atr1 = populacao1; valor2_Atr1 = populacao2; break;
  case 2: valor1_Atr1 = area1; valor2_Atr1 = area2; break;
  case 3: valor1_Atr1 = PIB1; valor2_Atr1 = PIB2; break;
  case 4: valor1_Atr1 = NPT1; valor2_Atr1 = NPT2; break;
  case 5: valor1_Atr1 = densidade1; valor2_Atr1 = densidade2; break;
}
// ATRIBUINDO VALORES DO ATRIBUTO 2
  switch (segOpcao) {
  case 1: valor1_Atr2 = populacao1; valor2_Atr2 = populacao2; break;
  case 2: valor1_Atr2 = area1; valor2_Atr2 = area2; break;
  case 3: valor1_Atr2 = PIB1; valor2_Atr2 = PIB2; break;
  case 4: valor1_Atr2 = NPT1; valor2_Atr2 = NPT2; break;
  case 5: valor1_Atr2 = densidade1; valor2_Atr2 = densidade2; break;
}
//Regra da densidade (Menor Vence)
 pontuacaoCarta1_Atr1 = (primOpcao == 5) ? (1.0 / valor1_Atr1) : valor1_Atr1;
 pontuacaoCarta2_Atr1 = (primOpcao == 5) ? (1.0 / valor2_Atr1) : valor2_Atr1;

 pontuacaoCarta1_Atr2 = (segOpcao == 5) ? (1.0 / valor1_Atr2) : valor1_Atr2;
 pontuacaoCarta2_Atr2 = (segOpcao == 5) ? (1.0 / valor2_Atr2) : valor2_Atr2; 
//Soma das pontuações para determinar o vencedor
 float pontuacaoTotalCarta1 = pontuacaoCarta1_Atr1 + pontuacaoCarta1_Atr2;
 float pontuacaoTotalCarta2 = pontuacaoCarta2_Atr1 + pontuacaoCarta2_Atr2;
//Exibindo o resultado final
printf("\n============================================================================\n");
printf("📊 RESULTADO DA BATALHA 📊\n");
printf("============================================================================\n");
printf("🏙️ Carta 1: %s | 🏙️ Carta 2: %s\n\n", cidade1, cidade2);
// Mostrando os dados reais comparados
printf("Atributo 1: Carta 1 = %.2f | Carta 2 = %.2f\n", valor1_Atr1, valor2_Atr1);
printf("Atributo 2: Carta 1 = %.2f | Carta 2 = %.2f\n\n", valor1_Atr2, valor2_Atr2);
// Mostrando o total ponderado
printf("Pontuação Total da Carta 1: %.2f\n", pontuacaoTotalCarta1);
printf("Pontuação Total da Carta 2: %.2f\n\n", pontuacaoTotalCarta2);
// Operador Ternário para Elegância de Decisão
printf("============================================================================\n");
(pontuacaoTotalCarta1 > pontuacaoTotalCarta2) ? printf("🏆 VENCEDOR FINAL: %s (Carta 1) 🏆\n", cidade1) :
(pontuacaoTotalCarta2 > pontuacaoTotalCarta1) ? printf("🏆 VENCEDOR FINAL: %s (Carta 2) 🏆\n", cidade2) :
printf("🤝 RESULTADO FINAL: Empate! 🤝\n");
printf("============================================================================\n");
printf("| Deseja voltar para o menu principal? (1-Sim 💪🎮/ 0-Não😥)➡ ");
scanf("%d", &voltarMenu);
printf("============================================================================\n");
}while (voltarMenu == 1 );
printf("Obrigado Por Jogar Cartas Super Trunfo! Até a próxima 🃏🎮\n");

  return 0;
}
