// Faça um programa que leia 2 valores inteiros A e B e, em seguida efetue a troca de valores de modo que A receba o valor de B e vice-versa.

#include <stdio.h>

int main(){
    int a, b, aux;
    printf("insira os valores de a e b:");
    scanf("%d %d", &a, &b);

    aux = a;
    a = b;
    b = aux;

    printf ("valores invertidos %d %d", a, b);

}