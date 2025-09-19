/******************************************************************************
LISTA 8 - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO   PROF: CRISTIANO FUSCHILO
LUIZ FERNANDO SILVA LEMOS

QUESTÃO 5.	Elabore um programa que faça leitura de vários números inteiros,
 até que se digite um número negativo. O programa tem que retornar o maior e
 o menor número lido.
*******************************************************************************/

#include <stdio.h>
int main(){
    int num;
    int maior = 0; int menor = 100000;
    printf("digite um numero");
    scanf("%d",&num);
    while (num > 0){
        if (num > maior)
            maior = num;
        if (num < menor)
            menor = num;
        printf("digite um numero: ");
        scanf("%d",&num);
    }
    printf("menor numero: %d   maior numero: %d",menor,maior);
}
