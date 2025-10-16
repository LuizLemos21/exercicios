//Faça um programa que leia o valor gasto com despesas em um restaurante e imprima o valor total da conta mais uma 
//gorjeta de 10%.

#include <stdio.h>

int main(){
    #define GORGETA 0.10
    float despesas, valor_total;

    printf("entre com o valor gasto com despesas no restaurante: ");
    scanf("%f",&despesas);
    
    valor_total = despesas + (despesas * GORGETA);

    printf("o valor total da conta eh de R$ %.2f", valor_total);

}
