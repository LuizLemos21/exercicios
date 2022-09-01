/* 
 QUESTAO O2. 
 Crie um programa que calcula o comprimento de uma string (não use a função strlen). 
*/
#include <stdio.h>
#include <string.h>
int main() {
 char str[100];
 int size = 0;
 gets(str);
 while(str[size] != '\0'){
 size++;
 }
 printf("o tamanho da string eh %d",size);
}
