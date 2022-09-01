/* QUESTAO 06 
 * 
 * Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da pessoa e a palavra 
 * “ACEITA”, caso contrario imprimir “NAO ACEITA”. 
 * 
 */
#include <stdio.h>
#include <string.h>
int main(){
 char str[99], sexo[9], aux[] ="feminino";
 int idade;
 printf("digite um nome: ");
 gets(str);
 printf("digite o sexo: ");
 gets(sexo);
 printf("digite a idade: ");
 scanf("%d",&idade);
 if((idade < 25) and (not(strcmp(sexo,aux)))){
 printf("%s ACEITA", str);
 } else {
 printf("%s NAO ACEITA", str);
 }
}
