/******************************************************************************
LISTA 8 - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO   PROF: CRISTIANO FUSCHILO
LUIZ FERNANDO SILVA LEMOS

QUESTÃO 6.	Escreva um programa que leia o número de habitantes de uma determinada cidade, o valor do kwh,
 e para cada habitante entre com os seguintes dados: consumo do mês e o código do consumidor (1-Residencial,
 2-Comercial, 3-Industrial). No final imprima o maior, o menor e a média do consumo dos habitantes; e por
 fim o total do consumo de cada categoria de consumidor.
*******************************************************************************/

#include <stdio.h>

int hab, kwh, i, cons, constot, consind, cod, consres, conscom;
int maior = 0;
int menor = 1000000;
float media;

int main(){
    printf("digite o numero de habitantes da cidade:");
    scanf("%d",&hab);
    printf("digite o valor do kwh:");
    scanf("%d",&kwh);
    for (i=0; i<=hab; i++){
        printf("digite o consumo do mes:");
        scanf("%d",&cons);
        if (cons > maior)
            maior = cons;
        if (cons < menor)
            menor = cons;
        printf("digite o codigo do consumidor:");
        scanf("%d",&cod);
        switch (cod) {
            case 1:
                consres+= cons;
                break;
            case 2:
                conscom+= cons;
                break;
            case 3:
                consind+= cons;
                break;
        }
        constot+= cons;
    }
    media = constot / hab;
    printf("menor consumo: %d \n maior consumo: %d \n media do consumo total: %.2f \n total do consumo Residencial: %d \n total do consumo Comercial: %d \n total do consumo Industrial: %d", menor, maior, media, consres, conscom, consind );

}
