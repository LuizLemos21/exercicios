// Faça um programa que leia o ano atual e quantos anos uma pessoa fez ou fará nesse ano. Em seguida imprima o ano em que ela nasceu.

#include <stdio.h>
 int main(){
    int ano, idade, anonasc;
    
    //Leitura das variaveis
    printf("qual eh o ano atual?");
    scanf("%d",&ano);

    printf("quantos anos você fez ou fara neste ano?");
    scanf("%d",&idade);

    anonasc = ano - idade;

    printf("voce nasceu no ano de %d", anonasc);


 }