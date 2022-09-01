//QUESTAO 19. Escreva um programa que leia a idade e o primeiro nome de 10 pessoas. Seu programa deve terminar quando uma idade negativa for digitada. Ao terminar, seu programa deve escrever o nome e a idade das pessoas mais jovens e mais velhas.
#include <stdio.h>
#include <string.h>
int main(){
 int idade, i;
 char str[10][99],maiornome[99], menornome[99];
 int maior = 0;
 int menor = 10000;
 i = 0;
 while((idade >= 0) and (i<10)){
 printf("digite o primeiro nome de uma pessoa: ");
 scanf(" %s",str[i]);
 printf("digite a idade da pessoa:");
 scanf("%d",&idade);
 getchar();
 if (idade > 0){
 if (idade > maior) {
 maior = idade;
 strcpy(maiornome, str[i]);
 }
 if (idade < menor) {
 menor = idade;
 strcpy(menornome, str[i]);
 }
 }
 i++;
 }
 printf("a pessoa mais velha eh: %s: %d anos\n", maiornome, maior);
 printf("a pessoa mais nova eh: %s: %d anos\n", menornome, menor);
}
