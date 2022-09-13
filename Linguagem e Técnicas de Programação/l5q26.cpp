// QUESTAO 26. Faça um programa que, dada uma string, diga se ela e um palíndromo ou não. Lembrando que um palíndromo e uma palavra que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. Exemplo:
//• ovo
//• arara
//• Socorram me, subi no onibus em Marrocos.
//• Anotaram a data da maratona
#include <stdio.h>
#include <string.h>
int main(){
 char stra[99],stra_nospace[99], strb[99];
 int sizea,sizea_nospace, i, j;
 printf("\nDigite uma palavra (ou uma frase):\n\n");
 gets(stra);
 sizea = strlen(stra);
 for(i=0,j=0; i < sizea; i++)
 {
 if(((stra[i] >= 65) and (stra[i] <= 90)) or ((stra[i] >= 97) and (stra[i] <= 122)))
 {
 stra_nospace[j]=stra[i];
 j++;
 }
 }
 stra_nospace[j]='\0';
 sizea_nospace = strlen(stra_nospace);
 for (i= sizea_nospace - 1, j=0; i >= 0; i--,j++)
 strb[j] = stra_nospace[i];
 strb[sizea_nospace] = '\0';
 if (strcmpi(stra_nospace, strb) == 0)
 printf("\n%c palindromo!!\n",130);
 else
 printf("\nNao %c palindromo!!\n",130);
}
