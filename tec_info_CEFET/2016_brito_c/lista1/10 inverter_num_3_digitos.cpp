//Faça um programa que leia um número de 3 dígitos e o escreva na ordem inversa.

#include <stdio.h>

int main(){
    //leitura de variáveis 
    int centena, dezena, unidade, num, num_inv;
    printf("insira um numero de 3 digitos: ");
    scanf("%d",&num);

    //calculo 
    unidade = num % 10;
    dezena = (num / 10) % 10;
    centena = num / 100;


    num_inv = unidade*100 + dezena*10 + centena;

    //printf("centena: %d, dezena: %d, unidade: %d\n", centena, dezena, unidade);

    printf("o numero invertido eh: %d",num_inv);

}