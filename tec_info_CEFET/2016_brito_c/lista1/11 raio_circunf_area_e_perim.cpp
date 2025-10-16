//Faça um programa que leia o raio de uma circunferência e calcule seu perímetro e sua área.

#include <stdio.h>

int main(){
    #define PI 3.14
    float raio, area, perimetro;
    printf("insira o valor do raio da circunferencia (em centímetros)");
    scanf("%f",&raio);

    //calculos
    perimetro = 2 * PI * raio;

    area = (PI * raio * raio);

    //exibindo resultados

    printf("esta circunferencia tem %.2f cm de area e %.2f cm de perimetro", area, perimetro);


}