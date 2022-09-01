// QUESTAO 15
// Escreva um programa para converter uma cadeia de caracteres de letras maiusculas em letras minusculas. Dica: some 32 dos caracteres cujo codigo ASCII est a entre 65 e 90.
#include <stdio.h>
#include <string.h>
int main() {
 char str[99];
 int size, i;
 gets(str);
 size = strlen(str);
 for (i=0; i<=size; i++){
 if ((str[i]>= 65) and (str[i]<=90)){
 str[i] += 32;
 }
 }
 printf("%s", str);
}
