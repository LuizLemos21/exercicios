#include <stdio.h>
#include <math.h> // pq sim
int main(){
 // DECLARAÇÃO DE VARIAVEIS 
 
 int i, rate, idade;
 int maior = 0;
 int quant = 0;
 int quant1 = 0;
 int quant2 = 0;
 int quant3 = 0;
 int quant4 = 0;
 int quant5 = 0;
 int quanttot = 0;
 float medid2, percdif34, porc5;
 
int idade2soma = 0;
// ENTRADA DE DADOS
 for (i=0; i<=99; i++){
 printf("Qual é a sua idade?");
 scanf("%d",&idade);
 printf("Qual é a sua classificação do filme(0-5)?"); // ERA PRA USAR STRING?
 scanf("%d",&rate);
 
 switch (rate){
 case 5:
 quant5++;
 break;
 case 4:
 quant4++;
 break;
 case 3:
 quant3++;
 break;
 case 2:
 quant2++;
 idade2soma+= idade;
 break;
 case 1: 
 quant1++;
 if(idade>maior){
 maior = idade;
 }
 break;
 default:
 printf("comando invalido\n");
 }
 
 }
 
 
 quanttot = (quant5 + quant4 + quant3 + quant2 + quant1);
 printf("quantidade de avaliações ótimo: %d",quant5);
 percdif34 = ((fabs(quant3 - quant4))/100) * quanttot;
 printf("diferenca percentual entre respostas regular e bom: %.2f",percdif34);
 medid2 = idade2soma/quant2;
 printf("media de idade das pessoas que responderam ruim: %.2f",medid2);
 printf("maior idade que respondeu pessimo: %d",maior);
 porc5 = (quant5/100 * quanttot);
 printf("porcentagem de respostas pessimo: %.2f",porc5);
 
 
}
