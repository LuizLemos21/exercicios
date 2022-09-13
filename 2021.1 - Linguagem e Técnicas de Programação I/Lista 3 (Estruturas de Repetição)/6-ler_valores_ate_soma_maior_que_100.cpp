#include <stdio.h>
int main()
{
 int num;
 float media = 0;
 int soma = 0;
 int quant = 0;
 
 while (soma < 100){
 scanf("%d",&num);
 soma+= num;
 quant++;
 }
 
 printf("Quantidade de numeros inseridos: %d",quant);
 media = soma/quant;
 printf("\nmedia dos numeros: %.2f",media);
 
}
