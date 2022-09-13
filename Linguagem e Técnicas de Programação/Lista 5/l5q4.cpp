/* QUESTAO 04 
 * 
 * Faça um programa que leia um nome e imprima as 4 primeiras letras do nome. 
 */
#include <stdio.h>
#include <string.h>
int main(){
 char str[99];
 int i;
 printf("digite um nome:");
 gets(str);
 printf("os primeiros 4 caracteres sao: ");
 for (i = 0; i <= 3; i++)
 printf("%c",str[i]);
}
