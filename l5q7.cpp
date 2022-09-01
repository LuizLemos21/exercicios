/*QUESTAO 07 
 * 
 * Crie um programa que compara duas strings (não use a função strcmp). 
 * 
 */
#include <stdio.h>
#include <string.h>
int main(){
 char str1[99], str2[99];
 int i = 0;
 int cont = 0;
 gets(str1);
 gets(str2);
 while((str1[i]!='\0') or (str2[i]!='\0')){
 if (str1[i] == str2[i])
 cont++;
 i++;
 }
 if (cont == i){
 printf("as duas strings sao iguais");
 } else{
 printf("as duas strings NAO sao iguais");
 }
}
