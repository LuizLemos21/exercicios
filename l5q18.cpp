//QUESTAO 18. Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.
#include <stdio.h>
#include <string.h>
int main(){
 int i;
 char str[99], l1,l2;
 printf("insira uma string: ");
 gets(str);
 printf("digite uma letra: ");
 scanf(" %c",&l1 );
 printf("digite uma letra para substituir essa letra na string: ");
 scanf(" %c",&l2 );
 for (i=0;i<= strlen(str);i++){
 if (str[i] == l1) str[i] = l2;
 }
 printf("string modificada: %s",str);
}
