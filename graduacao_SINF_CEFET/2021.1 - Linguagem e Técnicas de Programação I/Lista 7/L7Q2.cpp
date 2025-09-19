/******************************************************************************
LISTA 7 - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO   PROF: CRISTIANO FUSCHILO
LUIZ FERNANDO SILVA LEMOS

QUESTÃO 2.	Faça um programa em "C" que lê dois valores e imprime: 
•	se o primeiro valor for menor que o segundo, a lista de valores do primeiro 
até o segundo; 
•	se o primeiro valor for menor que o segundo a lista de valores do segundo
até o primeiro em ordem decrescente; 
•	se ambos forem iguais a mensagem "valores iguais"

*******************************************************************************/
#include <stdio.h>

int main()
{
    float v1,v2,i;
    
    printf("Insira dois valores \n valor 1: \n");
    scanf("%f",&v1);
    printf("valor 2: \n");
    scanf("%f",&v2);
    if (v1 == v2){
        printf("valores iguais");
    } else if (v1 < v2){
        for (i=v1;i<=v2;i++) printf(" %.2f ",i);
    }else{
        for(i=v1;i>=v2;i--) printf(" %.2f ",i);
    }
}
    
    
    

