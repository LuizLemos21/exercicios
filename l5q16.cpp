//QUESTAO 16 - Leia uma cadeia de caracteres e converta todos os caracteres para maiuscula. Dica: subtraia 32 dos caracteres cujo codigo ASCII est a entre 97 e 122.
#include <stdio.h>
#include <string.h>
int main() {
 char str[99];
 int size, i;
 gets(str);
 size = strlen(str);
 for (i=0; i<=size; i++){
 if ((str[i]>= 97) and (str[i]<=122)){
 str[i] -= 32;
 }
 }
 printf("%s", str);
}
