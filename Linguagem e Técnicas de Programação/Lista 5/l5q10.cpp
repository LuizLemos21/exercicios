/* QUESTAO 10 
 * Faça um programa que receba uma palavra e a imprima de tras-para-frente. 
 */
#include <stdio.h>
#include <string.h>
int main() {
 char string1[50];
 int size,i;
 gets(string1);
 size = strlen(string1);
 for (i=0;i<=size; i++){
 printf("%c",string1[size-i]);
 }
}
