/***********************************************************************************
 * LISTA 08
 * LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO PROF: CRISTIANO FUSCHILO
 * LUIZ FERNANDO SILVA LEMOS
 *
 * QUESTÃO 12. Faça um programa em linguagem C que receba do usuário um arquivo, e mostre na tela
 * quantas linhas esse arquivo possui
 *********************************************************************************/

#include <stdio.h>
#include <cstdlib>
int main() {
    FILE *fp;
    int linecounter = 0;
    char carac[99];

    //LEITURA
    fp = fopen("arq.txt","r");
    if (fp==NULL){
        printf("Erro na abertura do arquivo \n");
        system("pause");
        exit(1);
    }

    printf("arquivo lido com sucesso! \n");

    while(fgets(carac,99,fp)!=NULL)
        linecounter++;
    fclose(fp);
    printf("o arquivo possui %d linhas",linecounter);
}