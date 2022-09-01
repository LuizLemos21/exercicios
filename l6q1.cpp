/* LISTA 06
 * LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO PROF: CRISTIANO FUSCHILO
 * LUIZ FERNANDO SILVA LEMOS
 *
 *
 * QUESTAO 01. Escreva um programa que:
 * • Crie/abra um arquivo texto de nome “arq.txt”
 * • Permita que o usuário grave diversos caracteres nesse arquivo, até que o usuário entre com o caractere ‘0’
 * • Feche o arquivo
 */
#include <stdio.h>
#include <cstdlib>
int main() {
 FILE *fp;
 char carac[99];
 int i = 0;
 int result;
 // USUARIO ENTRA COM A SEQUENCIA DE CARACTERES
 printf("Digite uma sequencia de caracteres ('0' encerra a sequencia):\n");
 scanf("%c",&carac[0]);
 while (carac[i] != '0'){
 i++;
 scanf("%c",&carac[i]);
 }
 //CRIAÇÃO DO ARQUIVO
 fp = fopen("arq.txt","w");
 if (fp==NULL){
 printf("Erro na abertura do arquivo \n");
 system("pause");
 exit(1);
 }
 printf("arquivo criado com sucesso! \n");
 result = fputs(carac,fp);
 if (result == EOF)
 printf("Erro na gravação\n");
 else
 printf("Gravação de caracteres feita com sucesso");
 fclose(fp);
}
