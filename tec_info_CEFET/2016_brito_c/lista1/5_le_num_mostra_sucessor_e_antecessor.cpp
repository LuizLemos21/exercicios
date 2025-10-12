//5 - Faça um programa que leia um número inteiro e mostre seu sucessor e o antecessor.

#include <stdio.h>

int main (){
    printf("insira um número inteiro qualquer: ");
    int num;
    scanf("%d",&num);
    int ant = num - 1;
    int suc = num + 1;
    printf ("o antecessor de %d é %d e seu sucessor é %d", num, ant, suc);
}