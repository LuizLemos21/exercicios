/* 
 * QUESTAO 03 
 * 
 * 3. Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’ (maiúscula ou minúscula). 
 * 
 */
#include <stdio.h>
#include <string.h>
int main() {
 char str [99];
 gets(str);
 if ((str[0] == 'a') or (str[0] == 'A')){
 printf("%s",str);
 }
}
