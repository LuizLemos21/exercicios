#include <stdio.h>

int main() {
    float venda,comissao;

    printf("Digite o valor da venda: R$");
    scanf("%f",&venda);
    if(venda >= 100000){
        comissao = 700 + (venda * 0.16);
    } else if((venda < 100000) and (venda >= 80000)){
        comissao = 650 + (venda * 0.14);
    } else if ((venda < 80000) and (venda >= 60000)){
        comissao = 600 + (venda * 0.14);
    } else if ((venda < 60000) and (venda >= 40000)){
        comissao = 550 + (venda * 0.14);
    } else if ((venda < 40000) and (venda >= 20000)){
        comissao = 500 + (venda * 0.14);
    } else {
        comissao = 400 + (venda * 0.14);
    }

    printf("Comissao do vendedor: R$%.2f",comissao);
}
