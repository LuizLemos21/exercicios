//6 - Faça um programa que leia nome, idade, altura e escreva na tela

#include <stdio.h>

int main (){
    //declaração de variáveis
    char nome[50];
    int idade;
    float altura;
    
    // Leitura
    printf("insira seu nome: ");
    scanf("%s",nome);
    printf("insira sua idade: ");
    scanf("%d",&idade);
    printf("insira sua altura: ");
    scanf("%f",&altura);
    
    //Mostrar dados na tela
    printf("seu nome é %s, você tem %d anos e %.2f metros de altura", nome, idade, altura);

}