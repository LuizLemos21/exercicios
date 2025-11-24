/*
Um comerciante compra um produto e quer vendê-lo com um lucro de 45%, se o valor for menor de que R$20.00, caso contrário, 
o lucro será de 30%. Entre com o valor do produto e imprima o seu valor de venda.
*/

#include <stdio.h>

int main(){
    float valor, lucro, valor_venda;
    
    printf("Digite o valor do produto: ");
    scanf("%f",&valor);

    if (valor < 20){
        lucro = 1.45;
    } else {
        lucro = 1.3;
    }

    valor_venda = valor * lucro;

    printf("o valor total de venda do produto eh de: R$ %.2f", valor_venda);


}