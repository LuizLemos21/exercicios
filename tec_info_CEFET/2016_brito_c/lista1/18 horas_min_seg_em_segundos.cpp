//Faça um programa que leia horas, minutos e segundos e passe tudo para segundos.

#include <stdio.h>

int main(){

    int horas, minutos, segundos, segundos_totais;

    printf("entre horas, minutos e segundos: ");
    scanf("%d %d %d",&horas, &minutos, &segundos);

    segundos_totais = horas*3600 + minutos * 60 + segundos;

    printf("total de segundos: %d", segundos_totais);

}