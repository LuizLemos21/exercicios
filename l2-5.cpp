#include <stdio.h>
int main(){
 int num,soma,quant;
 float media;
 printf("DIGITE NUMEROS POSITIVOS (NUMERO NEGATIVO ENCERRA A SEQUENCIA: \n)");
 soma = 0;
 scanf("%d",&num);
 while(num >= 0){
 soma = soma + num;
 quant++;
 scanf("%d",&num);
 
 }
 
 media = soma/quant;
 printf("\nQUANTIDADE DE NUMEROS INSERIDOS: %d",quant);
 printf("\nSOMA: %d",soma);
 printf("\n MEDIA: %.2f",media);
 
 
}
