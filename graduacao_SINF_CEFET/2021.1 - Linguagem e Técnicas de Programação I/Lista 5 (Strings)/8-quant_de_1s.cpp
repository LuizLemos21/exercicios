/* QUESTAO 08 
 * 
 * Faça um programa que conte o numero de 1’s que aparecem em um string. Exemplo: “0011001” -> 3 
 * 
 */
#include <stdio.h>
#include <string.h>
int main(){
 char str[99];
 int i,cont1;
 gets(str);
 cont1 = 0;
 for (i=0;i<= strlen(str);i++)
 if (str[i]=='1')
 cont1 ++;
 printf("a quantidade de 1s nessa string eh: %d",cont1);
}
