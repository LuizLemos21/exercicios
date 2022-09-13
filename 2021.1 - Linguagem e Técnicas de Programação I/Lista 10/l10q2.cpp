#include <stdio.h>
#define VALORDIA 30

int main() {
    int dias;
    float imposto, quantia;

    printf("digite o numero de dias trabalhados");
    scanf("%d",&dias);
    quantia = dias * VALORDIA;
    imposto = quantia * 0.08;
    quantia-= imposto;
    printf("a quantia liquida que devera ser paga eh R$ %.2f",quantia);

}
