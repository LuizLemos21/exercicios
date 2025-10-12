//7 - Faça um programa que leia 2 notas e imprima uma média aritmética

#include <stdio.h>

int main (){
    // Declaração de variáveis
    float nota1;
    float nota2;
    
    // Leitura
    printf("insira o valor da nota 1: ");
    scanf("%f",&nota1);
    printf("insira o valor da nota 2: ");
    scanf("%f",&nota2);
    
    // Calculo da média
    float media = (nota1 + nota2)/2;
    
    //Mostrar dados na tela
    printf("a media das duas notas é %.2f", media);

}