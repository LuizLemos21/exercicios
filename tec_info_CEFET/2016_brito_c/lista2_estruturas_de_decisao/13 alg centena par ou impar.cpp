//Faça um programa que leia um número inteiro de 3 dígitos e diga se o algarismo da casa das centenas é par ou ímpar.

#include <stdio.h>

int main(){
    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    int centena = num/100;

    if (centena % 2 == 0){
        printf("o algarismo das centenas eh par");
    } else {
        printf("o algarismo das centenas eh impar");

    }
}