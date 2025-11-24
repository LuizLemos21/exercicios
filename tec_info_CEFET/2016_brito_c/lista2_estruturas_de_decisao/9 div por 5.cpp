//Faça um programa que leia um número inteiro e diga se ele é ou não é divisível por 5

#include <stdio.h>

int main(){
    int num;

    printf("insira um numero: ");
    scanf("%d",&num);

    if (num % 5 == 0){
        printf("esse numero eh divisivel por 5");
    } else {
        printf("esse numero NAO eh divisivel por 5");

    }

}