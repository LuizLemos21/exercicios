/******************************************************************************
LISTA 7 - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO   PROF: CRISTIANO FUSCHILO
LUIZ FERNANDO SILVA LEMOS

QUESTÃO 1.	Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em decímetros, centímetros e milímetros.


*******************************************************************************/
#include <stdio.h>

int main()
{
    float m,mm,dm,cm;
    
    printf("digite uma medida em metros: \n");
    scanf("%f",&m);
    dm = m * 10;
    cm = m * 100;
    mm = m* 1000;
    printf("Medida em: \n Decímetros: %.2f \n Centímetros %.2f \n Milímetros: %.2f",dm,cm,mm);
    
    
    
}
