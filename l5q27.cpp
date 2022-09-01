//QUESTAO 27. Construa um programa que leia duas strings fornecidas pelo usuário e verifique se a segunda string lida esta contida no final da primeira, retornando o resultado da verificação.
#include <stdio.h>
#include <string.h>
int main() {
 char stra[99], strb[99];
 int sizeb,sizea; int contaigual = 0;
 printf(" digite a string a:");
 gets(stra);
 printf(" digite a string b:");
 gets(strb);
 sizeb = strlen(strb);
 sizea = strlen(stra);
 for (int i = 0; i <= sizeb; i++) {
 if (stra[sizea - i] == strb[sizeb - i]){
 contaigual++;
 }
 }
 //printf("%d %d",contaigual, sizeb);
 if ((contaigual-1) == sizeb){
 printf("a string %s se encontra no final da string %s",strb,stra);
 } else{
 printf("a string %s nao se encontra no final da string %s",strb,stra);
 }
}
