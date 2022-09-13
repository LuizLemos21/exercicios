/* QUESTAO 05 
 * 
 * Digite um nome, calcule e retorne quantas letras tem esse nome. 
 * 
 */
#include <stdio.h>
#include <string.h>
int main(){
 char str[99];
 printf("insira um nome:");
 gets(str);
 printf(" esse nome possui %d letras ", strlen(str));
}
