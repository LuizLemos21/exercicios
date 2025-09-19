//QUESTAO 23. Escreva um programa que recebe do usuário uma string S, um caractere C, e uma posição I e devolve o índice da primeira posição da string onde foi encontrado o caractere. OBS: A procura deve começar a partir da posição I.
#include <stdio.h>
#include <string.h>
int main(){
 int i, I, pos;
 char str[99], C;
 I = 0;
 printf("digite uma string: ");
 gets(str);
 printf("digite um caractere: ");
 scanf("%c",&C);
 printf("digite uma posicao: ");
 scanf("%d",&I);
 for (i=(I-1); i<=strlen(str); i++){
 if (str[i] == C) pos = i + 1;
 }
 printf("a primeira ocorrencia do caractere %c apos a posicao %d eh na posicao %d",C,I,pos);
}
