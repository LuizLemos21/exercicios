// QUESTAO 14
// Faça um programa que leia uma palavra (maximo de 50 letras) e some 1 no valor ASCII de cada caractere da palavra. Imprima a string resultante.
#include <stdio.h>
#include <string.h>
int main() {
 char str[49];
 int i = 0;
 gets(str);
 while(str[i]!='\0'){
 str[i] += 1;
 i++;
 }
 printf("%s", str);
}
