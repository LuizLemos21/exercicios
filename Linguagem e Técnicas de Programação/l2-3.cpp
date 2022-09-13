#include <stdio.h>
int main()
{
 // INICIALIZAÇÃO DE VARIAVEIS
 int i, altura; 
 float medaltm, medaltf;
 int contf = 0;
 int contm = 0;
 int altm = 0;
 int altf = 0;
 //int sexo // POR ALGUMA CARALHA DE MOTIVO O SWITCH NAO FUNCIONA COM CHAR
 char sexo;
 int maior = 0;
 int menor = 10000;
 // ENTRADA DE DADOS
 
 for(i=0;i<=32;i++){ 
 printf("SEXO(m/f)");
 scanf("%c",&sexo); 
 printf("ALTURA(CM):");
 scanf("%d",&altura);
 
 // PROCESSAMENTO 
 switch (sexo) {
 case 'm':
 contm++;
 altm+= altura;
 break;
 case 'f':
 contf++;
 altf+= altura;
 break;
 default:
 printf("comando invalido \n");
 }
 if (altura > maior){
 maior = altura;
 }
 
 if (altura < menor){
 menor = altura;
 }
 
 
 }
 medaltf = altf/contf;
 medaltm = altm/contm;
 
 // SAIDA
 
 printf("maior altura %d",maior);
 printf("\nmenor altura: %d",menor);
 printf("\nmedia de altura de mulheres: %.2f",medaltf);
 printf("\nmedia de altura de homens: %.2f",medaltm);
 
