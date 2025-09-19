/******************************************************************************
LISTA 8 - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO PROF: CRISTIANO FUSCHILO
LUIZ FERNANDO SILVA LEMOS

QUESTÃO 9. Receber um nome e imprimir as letras que se encontram em indices pares
*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main(){
    char nome[99];
    int size, i;
    printf("Digite um nome:");
    gets(nome);
    size = strlen(nome);
    for (i=0; i<size; i++){
        if (i % 2 != 0)
            printf("%c",nome[i]);
    }


}
