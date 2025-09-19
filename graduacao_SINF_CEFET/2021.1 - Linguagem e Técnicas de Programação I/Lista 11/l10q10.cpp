#include <stdio.h>
#include <cstdlib>

int main() {
    FILE *fp;
    int linecounter = 0, palavracounter = 0, i = 0,j=0,contcarac=0,controle=0,quantletra[27],contcarac2=0;
    char linha[99], teste ='a';

    for(j=0;j<26;j++){
        quantletra[j]=0;        // ZERA TODAS POSIÇÕES PARA CONTAGEM DE LETRAS
    }

    // LEITURA DO ARQUIVO
    fp = fopen("l11q10.txt","r");
    if (fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        system("pause");
        exit(1);
    }
    printf("arquivo lido com sucesso!\n");
    while (fgets(linha,99,fp)!=NULL){
        i=0;
        while(linha[i]!='\0'){
            contcarac++;
            if ((linha[i] == ' ')or(linha[i] == '\n') or (linha[i] == '\t')){
                controle++;             // CADA VEZ QUE HOUVER UM ESPAÇO OU QUEBRA DE LINHA OU TABULAÇÃO O CONTROLE É INCREMENTADO
                if (controle == 1)
                    palavracounter++;   // O PROGRAMA SÓ CONTARA UMA PALAVRA COM 1 ESPAÇO, PARA QUE CADA 2 ESPAÇOS NÃO SEJAM CONTADOS COMO 2 PALAVRAS NOVAS
            } else{
                controle = 0;
                contcarac2++;
                for(j=0;j<26;j++){
                    if((teste==linha[i])or(teste-32==linha[i])){
                        quantletra[j-1]++;  // CONTAGEM DE CADA LETRA
                    }
                    teste='a'+j;        // INCREMENTA A LETRA TESTE
                }

            }

            i++;

        }

        linecounter++;
    }
    printf("\nnumero de linhas: %d",linecounter);
    printf("\nnumero de palavras: %d",palavracounter);
    printf("\nnumero de caracteres totais: %d",contcarac - linecounter); // NAO CONTA QUEBRA DE LINHA;
    printf("\nnumero de caracteres sem espacos: %d",contcarac2);
    printf("\nLETRAS:");
    // IMPRESSÃO DA CONTAGEM DE LETRAS
    teste = 'a';
    for (i=0;i<26;i++){
        if (quantletra[i] > 0)      // NÃO MOSTRA LETRAS QUE NAO APARECEM
        printf("\n%c: %d",teste,quantletra[i]);
        teste++;
    }




    fclose(fp);

}
