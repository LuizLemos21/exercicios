/******************************************************************************
LISTA 7 - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO   PROF: CRISTIANO FUSCHILO
LUIZ FERNANDO SILVA LEMOS

QUESTÃO 4.	Fazer um programa em "C" que lê um string qualquer de no máximo 80 caracteres e imprime:
•	Quantos caracteres tem o string;
•	Quantos caracteres são de pontuação;
•	Quantos caracteres são números;
•	Quantos caracteres são minúsculas.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[80];
    int i, size;
    int size2 = 0; int contpont = 0; int contnum = 0; int contmin = 0;

    printf("Insira uma string de ate 80 caracteres");
    gets(str);
    size = strlen(str);
    for (i=0;i<size;i++){
        if ((str[i] > 47) and (str[i] < 58)) contnum++;
        if ((str[i] > 96) and (str[i] < 123)) contmin++;
        switch (str[i]){
            case 33:
            case 34:
            case 39:
            case 40:
            case 41:
            case 44:
            case 45:
            case 46:
            case 47:
            case 58:
            case 59:
            case 63:
               contpont++;
        }
        size2++;
    }
    printf("quant de caracteres: %d  \n quantidade de sinais de pontuacao: %d \n quantidade de numeros: %d \n quantidade de letras minusculas: %d",size,contpont,contnum,contmin);
}




