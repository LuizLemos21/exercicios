// QUESTAO 24. Escreva um programa que leia duas palavras e diga qual deles vem primeiro na ordem alfabetica. Dica: ‘a’ e menor do que ‘b’.
#include <stdio.h>
#include <string.h>
int main(){
 int i, size, check;
 char str1[99], str2[99];
 printf("insira a string 1:");
 gets(str1);
 printf("insira a string 2:");
 gets(str2);
 if (strlen(str1) > strlen(str2))
 size = strlen(str1);
 else size = strlen(str2);
 i = 0;
 while(i!=size){
 if (str1[i] == str2[i]) {
 i++;
 } else if (str1[i] > str2[i]) {
 check = 0;
 i = size;
 } else {
 check = 1;
 i = size;
 };
 }
 if (check == 0){
 printf("%s vem antes na ordem alfabetica ",str2);
 } else{
 printf("%s vem antes na ordem alfabetica ",str1);
 }
}
