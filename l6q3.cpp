/* LISTA 06
 * LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO PROF: CRISTIANO FUSCHILO
 * LUIZ FERNANDO SILVA LEMOS
 *
 *
 * QUESTAO 03 - Faça um programa que receba o nome de um arquivo de entrada. O arquivo de entrada contem em cada linha o nome de uma cidade (ocupando 40 caracteres). O programa devera ler o arquivo de entrada e mostrar todas as cidades.
 */
#include <stdio.h>
#include <cstdlib>
int main() {
 FILE *fp;
 char cidade[41];
 //LEITURA DO ARQUIVO
 fp = fopen("city.txt","r");
 if (fp==NULL){
 printf("Erro na abertura do arquivo \n");
 system("pause");
 exit(1);
 }
 printf("arquivo lido com sucesso! \n");
 //IMPRESSAO DO ARQUIVO NA TELA
 while(fgets(cidade,2,fp)!=NULL)
 printf("%s",cidade);
 fclose(fp);
}
