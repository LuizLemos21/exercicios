/* QUESTAO 09 
 * Escreva um programa que substitui as ocorrências de um caractere ‘0’ em uma string por outro caractere ‘1’. 
 */
#include <stdio.h>
#include <string.h>
int main(){
 char str[99];
 int i;
 gets(str);
 for (i=0;i<= strlen(str);i++)
 if (str[i]=='0')
 str[i]= '1';
 printf("%s",str);
}
