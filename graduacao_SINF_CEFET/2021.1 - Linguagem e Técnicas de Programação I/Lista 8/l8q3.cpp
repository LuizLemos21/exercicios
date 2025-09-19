/******************************************************************************
LISTA 8 - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO   PROF: CRISTIANO FUSCHILO
LUIZ FERNANDO SILVA LEMOS

QUESTÃO 3.	Faça um programa que receba dois números e mostre qual deles é o maior.
*******************************************************************************/

#include <stdio.h>

int main(){
    float n1, n2;
    printf("insira um numero:");
    scanf("%f",&n1);
    printf("insira outro numero:");
    scanf("%f",&n2);

    if (n1>n2){
        printf("%.2f eh maior que %.2f",n1,n2);
    } else if (n2>n1){
        printf("%.2f eh maior que %.2f",n2,n1);
    } else {
        printf("os dois numeros sao iguais");
    }
}
