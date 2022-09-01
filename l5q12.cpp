// QUESTAO 12
// 12. Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa palavra.
// Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere.
#include <stdio.h>
#include <string.h>
int main() {
 char str[99],carac;
 int i,size ;
 int contvogal = 0;
 printf("insira uma string:");
 gets(str);
 printf("insira um caracter para substituir as vogais:");
 scanf(" %c",&carac);
 size = strlen(str);
 for(i=0; i<=size; i++){
 switch (str[i]) {
 case 'a':
 case 'e':
 case 'i':
 case 'o':
 case 'u':
 case 'A':
 case 'E':
 case 'I':
 case 'O':
 case 'U':
 contvogal++;
 str[i] = carac;
 break;
 }
 }
 printf("\nquantidade de vogais: %d:",contvogal);
 printf("\n%s",str);
}
