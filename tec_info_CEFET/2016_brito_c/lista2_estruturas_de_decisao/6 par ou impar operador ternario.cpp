//Faça um programa que leia um número inteiro e diga se ele é par ou ímpar usando operador ternário.

#include <stdio.h>

int main(){
    int num;
    
    printf("digite um numero: ");
    scanf("%d", &num);

    (num % 2 == 0)? printf("%d eh par", num): printf("%d eh impar", num);


    
}