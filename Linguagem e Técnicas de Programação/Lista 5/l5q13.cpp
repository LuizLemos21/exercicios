// QUESTAO 13
// Ler uma frase e contar quantos caracteres sao espac¸os em brancos. Lembre-se que uma frase e um conjunto de caracteres (vetor).
#include <stdio.h>
#include <string.h>
int main(){
 char str[99];
 int i = 0;
 int cont = 0;
 printf(" Digite uma frase:");
 gets(str);
 while(str[i]!= '\0'){
 if (str[i] == ' ') {
 cont++;
 }
 i++;
 }
 printf(" a frase tem %d espacos em branco", cont);
}
