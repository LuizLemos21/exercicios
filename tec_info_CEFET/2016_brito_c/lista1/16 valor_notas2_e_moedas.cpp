//Faça um programa que leia 1 valor inteiro representando uma certa quantidade em real (moeda) e diga qual é o número 
//mínimo de moedas e de 1 real e máximo em notas de 2 em que esse valor pode ser representado.

#include <stdio.h>

int main(){
    int valor, notas2, moedas1;

    printf("entre com um valor em reais: ");
    scanf("%d",&valor);

    notas2 = valor/2;
    moedas1 = valor % 2;

    printf("%d notas de 2 reais + %d moedas de 1 real", notas2, moedas1);


}
