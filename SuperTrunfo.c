#include <stdio.h>
 
 int main (){
// Variáveis refentes à carta 1:
   char estado1;
   char codigo1 [4];
   char nomecidade1 [20];
   int populacao1;
   float area1;
   float pib1;
   int turistico1;

// Variáveis referentes à carta 2:
   char estado2;
   char codigo2 [4];
   char nomecidade2 [20];
   int populacao2;
   float area2;
   float pib2;
   int turistico2;

// Entrada de dados em tela (carta 1):

  printf ("Digite uma letra, de (A-H) para escolha da carta 1: ");
  scanf (" %c", &estado1);

  printf ("Digite a letra escolhida anteriormente seguida de um número 01 a 04. Ex:(A01, B03): ");
  scanf ("%s", &codigo1);

  printf ("digite o nome da cidade: ");
  scanf ("%s", &nomecidade1);

  printf ("Digite o número da habitantes da cidade: ");
  scanf ("%d", &populacao1);

  printf ("Digite a área da cidade em KM²: ");
  scanf ("%f", &area1);


  printf ("Digite o produto interno bruto (PIB) da cidade: ");
  scanf ("%f", &pib1);

  printf ("A cidade tem quantos pontos turísticos? ");
  scanf ("%d", &turistico1);


// Entrada de dados em tela (Carta 2):

  printf ("Digite uma letra, de (A-H) para escolha da carta 2: ");
  scanf (" %c", &estado2);

  printf ("Digite a letra escolhida anteriormente seguida de um número 01 a 04. Ex:(A01, B03) para escolha do código da segunda cidade: ");
  scanf ("%s", &codigo2);

  printf ("digite o nome da segunda cidade: ");
  scanf ("%s", &nomecidade2);

  printf ("Digite o número da habitantes da segunda cidade: ");
  scanf ("%d", &populacao2);

  printf ("Digite a área da segunda cidade em KM²: ");
  scanf ("%f", &area2);

  printf ("Digite o produto interno bruto (PIB) da segunda cidade: ");
  scanf ("%f", &pib2);

  printf ("A segunda cidade tem quantos pontos turísticos? ");
  scanf ("%d", &turistico2);


//Saída de dados/exibição da carta 1:

printf ("A letra escolhida  para a carta 1 foi: %c\n", estado1);
printf ("A letra e código escolhidos para a carta 1 foram: %s\n", codigo1);
printf ("Cidade: %s\n", nomecidade1);
printf ("Habitantes: %d\n", populacao1);
printf ("Área: %.2f\n", area1);
printf ("PIB: %.2f\n", pib1);
printf ("Pontos turísticos: %d", turistico1);


//Saída de dados/exibição da carta 2:

printf ("A letra escolhida  para a carta 2 foi: %c\n", estado2);
printf ("A letra e código escolhidos para a carta 2 foram: %s\n", codigo2);
printf ("Cidade: %s\n", nomecidade2);
printf ("Habitantes: %d\n", populacao2);
printf ("Área: %.2f\n", area2);
printf ("PIB: %.2f\n", pib2);
printf ("Pontos turísticos: %d", turistico2);




  return 0;

}