#include <stdio.h>
int main() {
 float peso, imc, altura; // declaração de variáveis
 // entrada de dados
 printf("informe seu peso:");
 scanf("%f",&peso);
 printf("informe sua altura:");
 scanf("%f",&altura);
 imc = peso / (altura * altura); // calculo do imc
 // resultado do imc
 if (imc <= 18.5){
 printf(" imc: %.2f abaixo do peso normal",imc);
 } else if (imc <= 25){
 printf("imc: %.2f dentro do peso normal",imc);
 } else if (imc <= 30){
 printf("imc: %.2f acima do peso normal",imc);
 }
 else{
 printf("imc: %.2f peso excessivo",imc);
 }
}
