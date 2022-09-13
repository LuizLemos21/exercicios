//QUESTAO 17. Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os espaços em branco do vetor e depois escrever o vetor resultante.
#include <stdio.h>
#include <string.h>
int main() {
 //REMOVER ' ' DE STRING
 char str[99];
 int size; int cont = 0;
 printf("insira uma string:");
 gets(str);
 size = strlen(str);
 for (int i = 0; i < size - cont ; ++i) {
 if (str[i] == ' '){
 cont++;
 for (int j = i; j < size ; ++j) {
 str[j] = str[j+1];
 }
 }
 }
 printf("string sem espacos:");
 printf("\n %s",str);
}
