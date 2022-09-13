/******************************************************************************
LISTA 8 - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO   PROF: CRISTIANO FUSCHILO
LUIZ FERNANDO SILVA LEMOS

QUESTÃO 2.	Ler uma temperatura em graus Celsius e apresenta-la convertida em graus Fahrenheit.
 A fórmula de conversão é: F = C*1,8+32 - sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*******************************************************************************/

#include <stdio.h>

int main(){
    float c, f;
    printf("insira uma temperatura em Celsius:");
    scanf("%f",&c);
    f = c * 1.8 + 32;
    printf("essa temperatura equivale a %.2f graus Fahrenheit" ,f);
}
