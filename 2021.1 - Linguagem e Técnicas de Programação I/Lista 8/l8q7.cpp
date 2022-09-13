/******************************************************************************
LISTA 8 - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO PROF: CRISTIANO FUSCHILO
LUIZ FERNANDO SILVA LEMOS

QUESTÃO 7.	Escreva um programa que leia 10 números inteiros e os armazene em
 um vetor. Imprima o vetor, o maior elemento e a posição que ele se encontra.
*******************************************************************************/

 #include <stdio.h>

 int main(){
    int vet[10], i, maiorpos;
    int maior = 0;

     for(i=0;i<10;i++){
         printf("digite um numero:");
         scanf("%d",&vet[i]);
         if (vet[i]>maior){
             maior = vet[i];
             maiorpos = i;
         }
     }
     for (i=0;i<10;i++)
         printf("%d ",vet[i]);
     printf("\nmaior elemento: %d  posicao %d",maior,maiorpos+1);

 }
