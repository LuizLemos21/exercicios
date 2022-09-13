// QUESTAO 20. Faça um programa que preencha uma matriz de string com os modelos de cinco carros (exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo desses carros, isto e, quantos quilômetros cada um deles faz com um litro de combustível. Calcule e mostre:
//a) O modelo de carro mais econômico;
//b) Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distancia de 1.000 quilometros.
#include <stdio.h>
#include <string.h>
int main(){
 int i;
 float cons[5];
 char model[5][99],eccarro[99];
 int maior = 0;
 for (i=0; i<=4; i++){
 printf("digite o modelo do carro:");
 gets(model[i]);
 printf("digite o consumo do %s (KM/L):",model[i]);
 scanf("%f",&cons[i]);
 getchar();
 if (cons[i]>maior){
 maior = cons[i];
 strcpy(eccarro,model[i]);
 }
 }
 printf("\ncarro mais economico: %s ", eccarro);
 printf("\nlitros de combustivel para cada carro percorrer 1000 km\n");
 for (i=0; i<=4; i++){
 printf("\n%s: %.2f litros", model[i], 1000/cons[i]);
 }
}
