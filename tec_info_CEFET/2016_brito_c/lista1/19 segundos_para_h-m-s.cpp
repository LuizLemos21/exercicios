//Faça um programa que leia o total de segundos e passe para hora, minuto e segundos

#include <stdio.h>

int main(){
    int segundos_totais, horas, minutos, segundos;

    segundos_totais = 3730;

    horas = segundos_totais / 3600;
    minutos = (segundos_totais % 3600) / 60;
    segundos = (segundos_totais % 3600) % 60;

    printf("%d horas, %d minutos e %d segundos",horas,minutos,segundos);

}