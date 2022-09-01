//QUESTAO 28. Leia duas cadeias de caracteres A e B. Determine quantas vezes a cadeia A ocorre na cadeia B.
#include <stdio.h>
#include <string.h>
int main(){
 int i,j, sizea, sizeb;
 char stra[99],strb[99],straux[99];
 int conta = 0;
 printf("digite a string a:");
 gets(stra);
 sizea = strlen(stra);
 printf("digite a string b:");
 gets(strb);
 sizeb = strlen(strb);
 for (i=0;i<sizea;i++){
 for (j=0; j<sizeb;j++){
 straux[j] = stra[i+j];
 }
 straux[j]='\0'; //INTERROMPE A STRAUX
 if (strcmp(strb,straux)==0)
 conta++;
 }
printf("\na string b ocorre %d vezes dentro da string a:",conta);
}
