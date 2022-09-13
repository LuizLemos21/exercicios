/******************************************************************************
LISTA 8 - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO   PROF: CRISTIANO FUSCHILO
LUIZ FERNANDO SILVA LEMOS

QUESTÃO 1.	Efetuar a leitura de um número real e apresentar o resultado do quadrado desse número.
*******************************************************************************/

#include <stdio.h>

int main(){
    float n1, quad;
    printf("insira um numero real:");
    scanf("%f",&n1);
    quad = n1 * n1;
    printf("o quadrado desse numero eh: %.2f",quad);
}
