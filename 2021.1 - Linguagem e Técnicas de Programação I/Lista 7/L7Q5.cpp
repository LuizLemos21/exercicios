/******************************************************************************
LISTA 7 - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO   PROF: CRISTIANO FUSCHILO
LUIZ FERNANDO SILVA LEMOS

QUESTÃO 5.	Escrever uma função que recebe um string e um caracter como parâmetro
e remove todas as ocorrências do caracter do string.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[99],strmod[99],carac;
    int i,j,size;

    printf("Digite uma string:\n");
    gets(str);
    printf("Digite um caracter para eliminar da string:");
    scanf("%c",&carac);
    size = strlen(str);
    for (i=0,j=0;i<size;i++){
        if (str[i]!=carac){
                strmod[j] = str[i];
                j++;
        }
        strmod[j] = '\0';
    }
    printf("string modificada: \n %s",strmod);



}




