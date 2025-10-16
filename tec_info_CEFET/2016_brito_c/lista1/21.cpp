/*
Faça um programa que, dado um número de conta corrente com 3 dígitos, retorne o valor de seu dígito verificador.
Ex: para 235
somar o número da conta com o ser inverso (235 + 532 = 767 )
multiplicar cada dígito pela sua ordem posicional e somar esses resultados. (7 * 1) + (6 * 2) + (7 * 3) = 40
O último dígito desse resultado é o dígito identificador da conta (40 → 0) 
*/

#include <stdio.h>

int main(){
    int num_conta, inv, soma, res, d1, d2, d3, dig_id;

    printf("digite o numero da conta corrente: ");
    scanf("%d",&num_conta);
    
    d1 = num_conta / 100;
    d2 = (num_conta / 10) % 10;
    d3 = num_conta % 10;

    inv = d3 * 100 + d2 * 10 + d1;
    
    soma = num_conta + inv;

    res = soma / 100;
    res += ((soma / 10) % 10)*2;
    res += (soma % 10) * 3;

    dig_id = res % 10;

    printf("o digito identificador eh: %d", dig_id);

}