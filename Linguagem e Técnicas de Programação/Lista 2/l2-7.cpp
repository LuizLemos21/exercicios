#include <stdio.h>
int main(){
 // INICIALIZAÇÃO DE VARIAVEIS
 int id, idmenor, idmaior, quant;
 float peso, somapeso;
 float medpeso = 0;
 quant = 0;
 float maior = 0;
 float menor = 1000000;
 
 // LEITURA DE DADOS
 printf("id:");
 scanf("%d",&id);
 
 somapeso = 0;
 while (id!=0){
 printf("peso:");
 scanf("%f",&peso);
 somapeso+= peso;
 quant++;
 if (peso > maior){
 maior = peso;
 idmaior = id;
 }
 if (peso < menor){
 menor = peso;
 idmenor = id;
 }
 printf("id:");
 scanf("%d",&id);
 }
 
 medpeso = somapeso/quant;
 
 // SAIDA
 printf("peso medio dos bois: %.2f",medpeso);
 printf("\nboi mais pesado: id %d peso: %.2f" ,idmaior, maior);
 printf("\nboi mais magro: id %d peso: %.2f" ,idmenor, menor);
}
