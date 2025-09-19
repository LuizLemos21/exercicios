/******************************************************************************
LISTA 7 - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO   PROF: CRISTIANO FUSCHILO
LUIZ FERNANDO SILVA LEMOS

QUESTÃO 3.	Fazer um programa em "C" que lê e armazena 10 valores e imprime o maior e o menor valores lidos. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vet[10], i;
    int maior = 0;
    int menor = 100000000;
    printf("Entre com 10 valores");
    for(i=0;i<=9;i++){
        printf("\nvalor %d: ",i+1);
        scanf("%d",&vet[i]);
        if (vet[i] > maior) maior = vet[i];
        if (vet[i] < menor) menor = vet[i];
    }
    printf("\nMaior valor: %d \n Menor valor: %d",maior,menor);
}
    
    
    

