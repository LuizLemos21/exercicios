//QUESTAO 21. Faça um programa que receba duas frases distintas e imprima de maneira invertida, trocando as letras A por *.
#include <stdio.h>
#include <string.h>
int main() {
 char string1[50], string2[50] ;
 int size,i,size2;
 gets(string1);
 size = strlen(string1);
 gets(string2);
 size2 = strlen(string2);
 for (i=0;i<=size; i++){
 if ((string1[ size - i] == 'A') or (string1[ size - i] == 'a')) string1[size - i] = '*';
 printf("%c",string1[size-i]);
 }
 for (i=0;i<=size2; i++){
 if ((string2[ size2 - i] == 'A') or (string2[ size2 - i] == 'a')) string2[size2 - i] = '*';
 printf("%c",string2[size2-i]);
 }
}
