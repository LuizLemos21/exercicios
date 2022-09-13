/* QUESTAO 11 
 * 
 * Faça um programa que receba do usuário uma string. O programa imprime a string sem suas vogais. 
 */
#include <stdio.h>
#include <string.h>
int main() {
 char str[99];
 int i = 0;
 gets(str);
 while(str[i]!='\0'){
   switch (str[i]) {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case'u':
   case'A':
   case'E':
   case'I':
   case 'O':
   case 'U':
   break;
   default:
 printf("%c", str[i]);
 }
 i++;
 }
}
