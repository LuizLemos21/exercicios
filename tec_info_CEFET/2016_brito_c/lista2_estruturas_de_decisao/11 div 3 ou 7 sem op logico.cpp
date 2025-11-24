//Faça um programa que leia um número inteiro e diga se ele é ou não é divisível por 3 e 7. NÃO UTILIZE OPERADOR LÓGICO (&& || !)

#include <stdio.h>

int main(){
    int num;
    printf("entre com um numeros: ");
    scanf("%d", &num);

    if (num % 3 == 0){
        if (num % 7 == 0){
            printf("%d eh divisivel por 3 e 7", num);
            return 0;
        }
    }

    printf("%d NAO eh divisivel por 3 e 7", num);
}
