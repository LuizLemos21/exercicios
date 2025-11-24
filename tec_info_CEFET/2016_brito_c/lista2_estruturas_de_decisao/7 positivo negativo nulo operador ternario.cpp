//Faça um programa que leia um número inteiro e diga se é positivo, negativo ou nulo usando operador ternário.

#include <stdio.h>

int main(){
    int num;
    
    printf("digite um numero: ");
    scanf("%d", &num);

    (num > 0)? printf("%d eh um numero positivo", num):(num < 0)? printf("%d eh um numero negativo", num): printf("%d eh nulo", num); 
}