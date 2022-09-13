#include <stdio.h>
int main(){
 
 float P, i, potencia, base, valor;
 int counter, n;
 printf("valor da aplicaçao mensal:");
 scanf("%f",&P);
 printf("taxa de juros:");
 scanf("%f",&i);
 printf("numero de meses:");
 scanf("%d",&n);
 potencia = 1;
 base = (i+1);
 //printf("%f",base);
 
 for (counter=0; counter<=(n-1); counter++){
 
 potencia *= base;
 }
 
 // printf("pot: %.2f",potencia);
 valor = ( P * (potencia-1)/i);
 
 printf("valor acumulado: %.2f",valor);
 
 
}
