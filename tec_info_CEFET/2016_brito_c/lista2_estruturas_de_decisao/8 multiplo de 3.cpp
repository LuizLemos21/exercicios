//Faça um programa que leia um número inteiro e dige se ele é ou não um múltiplo de 3.

//Faça um programa que leia um número inteiro e diga se ele é ou não é divisível por 5

#include <stdio.h>

int main(){
    int num;

    printf("insira um numero: ");
    scanf("%d",&num);

    if (num % 3 == 0){
        printf("esse numero eh multiplo de 3");
    } else {
        printf("esse numero NAO eh multiplo de 3");

    }

}