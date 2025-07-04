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
   float densidade1;
   float pib_per_capita1;


// Variáveis referentes à carta 2:
   char estado2;
   char codigo2 [4];
   char nomecidade2 [20];
   int populacao2;
   float area2;
   float pib2;
   int turistico2;
   float densidade2;
   float pib_per_capita2;

// Variável para inversão da densidade populacional:
   float densidadeinvertida1;
   float densidadeinvertida2;

// váriaveis de resultado das comparações:
   int resultado_populacao;
   int resultado_area;
   int resultado_pib;
   int resultado_turistico;
   int resultado_densidade;
   int resultado_pib_per_capita;

// Variável para a declaração do super poder:
   double super_poder1;
   double super_poder2;
   


  // Entrada de dados em tela (carta 1):
  printf ("Bem-vindo ao meu Super Trunfo super basicão!\n");
  printf ("Vamos criar duas cartas para você jogar, e que vença o mais forte!\n");


// Entrada de dados em tela (carta 1):

  printf ("Digite uma letra, de (A-H) para a carta n°1: ");
  scanf (" %c", &estado1);


  printf ("Digite a letra escolhida anteriormente seguida de um número 01 a 04. Ex:(A01, B03): ");
  scanf ("%s", codigo1);


  printf ("Digite o nome da cidade: ");
  scanf ("%s", nomecidade1);


  printf ("Digite o número de habitantes da cidade: ");
  scanf ("%d", &populacao1);


  printf ("Digite a área da cidade em KM²: ");
  scanf ("%f", &area1);


  printf ("Digite o produto interno bruto (PIB) da cidade: ");
  scanf ("%f", &pib1);


  printf ("A cidade tem quantos pontos turísticos? ");
  scanf ("%d", &turistico1);



// Entrada de dados em tela (Carta 2):

  printf ("Digite uma letra, de (A-H) para a carta 2: ");
  scanf (" %c", &estado2);


  printf ("Digite a letra escolhida anteriormente seguida de um número 01 a 04. Ex:(A01, B03) para escolha do código da segunda cidade: ");
  scanf ("%s", codigo2);


  printf ("Digite o nome da segunda cidade: ");
  scanf ("%s", nomecidade2);


  printf ("Digite o número de habitantes da segunda cidade: ");
  scanf ("%d", &populacao2);


  printf ("Digite a área da segunda cidade em KM²: ");
  scanf ("%f", &area2);


  printf ("Digite o produto interno bruto (PIB) da segunda cidade: ");
  scanf ("%f", &pib2);


  printf ("A segunda cidade tem quantos pontos turísticos? ");
  scanf ("%d", &turistico2);



//variaveis para calculo da densidade populacional das cartas:
  densidade1 = (float) populacao1 / area1;
  densidade2 = (float) populacao2 / area2;

//variaveis para calculo do PIB per capta:
  pib_per_capita1 = (float) pib1 / populacao1;
  pib_per_capita2 = (float) pib2 / populacao2;
  


//Saída de dados/exibição da carta 1:

printf ("A letra escolhida  para a carta 1 foi: %c\n", estado1);
printf ("A letra e código escolhidos para a carta 1 foram: %s\n", codigo1);
printf ("Cidade: %s\n", nomecidade1);
printf ("Habitantes: %d\n", populacao1);
printf ("Área: %.2f km²\n", area1);
printf ("PIB: %.2f bilhões de reais\n", pib1 / 1000000000);
printf ("Pontos turísticos: %d\n", turistico1);
printf ("A densidade populacional de %s é: %.2f hab/km²\n", nomecidade1, densidade1);
printf ("O PIB per capita de %s é: %.2f reais\n", nomecidade1, pib_per_capita1);



//Saída de dados/exibição da carta 2:

printf ("A letra escolhida  para a carta 2 foi: %c\n", estado2);
printf ("A letra e código escolhidos para a carta 2 foram: %s\n", codigo2);
printf ("Cidade: %s\n", nomecidade2);
printf ("Habitantes: %d\n", populacao2);
printf ("Área: %.2f km²\n", area2);
printf ("PIB: %.2f bilhões de reais\n", pib2 / 1000000000);
printf ("Pontos turísticos: %d\n", turistico2);
printf ("A densidade populacional de %s é: %.2f hab/km²\n", nomecidade2, densidade2);
printf ("O PIB per capita de %s é: %.2f reais\n", nomecidade2, pib_per_capita2);


//variável para inversão da densidade populacional:
  densidadeinvertida1 = (float) area1 / populacao1;
  densidadeinvertida2 = (float) area2 / populacao2;


/*Lembrete - comparação das cartas: é necessário comparar os valores de: população, 
área, PIB, pontos turísticos, densidade populacional invertida e PIB per capita*/

// Atribuindo os calculos às variáveis de resultado das comparações:
resultado_populacao = populacao1 > populacao2;
resultado_area = area1 > area2;
resultado_pib = pib1 > pib2;
resultado_turistico = turistico1 > turistico2;
resultado_densidade = densidadeinvertida1 < densidadeinvertida2; // Invertendo a lógica para densidade
resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2;

// Super poder:
super_poder1 = (double) populacao1 + area1 + pib1 + turistico1 + densidadeinvertida1 + pib_per_capita1;
super_poder2 = (double) populacao2 + area2 + pib2 + turistico2 + densidadeinvertida2 + pib_per_capita2;


// Exibindo os resultados das comparações:
printf("População: a cidade %s venceu\n", resultado_populacao ? nomecidade1 : nomecidade2);
printf("Área: a cidade %s venceu\n", resultado_area ? nomecidade1 : nomecidade2);
printf("PIB: a cidade %s venceu\n", resultado_pib ? nomecidade1 : nomecidade2);
printf("Pontos turísticos: a cidade %s venceu\n", resultado_turistico ? nomecidade1 : nomecidade2);
printf("Densidade populacional: a cidade %s venceu\n", resultado_densidade ? nomecidade1 : nomecidade2);
printf("PIB per capita: a cidade %s venceu\n", resultado_pib_per_capita ? nomecidade1 : nomecidade2);
printf("Super poder: A cidade %s venceu com super poder de %.lf\n", 
       super_poder1 > super_poder2 ? nomecidade1 : nomecidade2, 
       super_poder1 > super_poder2 ? super_poder1 : super_poder2);

  return 0;

}