// Faça um programa que calcule o volume de um cilindro, dados seu raio e altura.

#include <stdio.h>

int main(){
    #define PI 3.14
    float raio, altura, volume;
    
    printf("insira os valores de raio e altura do cilindro (em centimeros)");
    scanf("%f %f",&raio, &altura);

    volume = (PI * raio * raio) * altura;
    printf("o volume do cilindro e de %.2f cm3", volume);


}