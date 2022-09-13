#include <stdio.h>
int main()
{
 int i, vet[5] ;
 int maior = 0;
 int menor = 32767;
 int posmaior = 0;
 int posmenor = 0;
 for (i=0; i<5; i++){
 printf("insira um valor:");
 scanf("%d",&vet[i]);
 if(vet[i]> maior){
 maior = vet[i];
 posmaior = i+1;
 }
 
 if (vet[i] < menor){
 menor = vet[i];
 posmenor = i+1;
 }
 }
 printf("posição do maior valor inserido: %d \n posição do menor valor inserido: %d",posmaior, posmenor);
}
