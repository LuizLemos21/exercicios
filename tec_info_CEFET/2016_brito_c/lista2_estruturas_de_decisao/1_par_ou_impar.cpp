//Faça um programa que leia um número inteiro e diga se ele é par ou ímpar.

#include<stdio.h>

int main(){
    int num;

    printf("insira um numero: ");
    scanf("%d",&num);

    if (num % 2 == 0){
        printf ("par");
    }else{
        printf ("impar");
    }

}