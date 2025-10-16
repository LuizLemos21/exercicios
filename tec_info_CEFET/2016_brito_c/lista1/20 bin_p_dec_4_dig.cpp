//Faça um programa que leia um número binário de 4 dígitos e diga qual é o seu decimal correspondente.

#include <stdio.h>
int main(){
    int bin, dec;

    printf("Insira um numero binario de 4 digitos: ");
    scanf("%d",&bin);

    dec = (bin % 10) * 1;
    bin/=10;

    dec += (bin % 10) * 2;
    bin/=10;

    dec += (bin % 10) * 4;
    bin/=10;

    dec += (bin % 10) * 8;
    
    printf("o equivalente em decimal eh: %d", dec);
}