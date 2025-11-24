//Faça um programa que leia um número inteiro e diga se ele é ou não é divisível por 3 e 7 usando operador ternário.

#include <stdio.h>

int main(){
    int num;

    printf("insira um numero: ");
    scanf("%d",&num);

    (num % 7 == 0 && num % 3 == 0)? printf("%d eh divisivel por 3 e por 7", num): printf("%d NAO eh divisivel por 3 e por 7", num);
}