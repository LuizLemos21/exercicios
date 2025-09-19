/* LISTA 09 - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
 * LUIZ FERNANDO SILVA LEMOS
 * PROF: CRISTIANO FUSCHILO
 *
 * QUESTAO 01 - Efetuar a leitura de 3 valores e apresentar como resultado final a soma dos quadrados
 *  dos 3 valores lidos
 */
#include <stdio.h>

int main() {
    float a,b,c, soma;

    printf("insira um valor a: ");
    scanf("%f",&a);
    printf("insira um valor b: ");
    scanf("%f",&b);
    printf("insira um valor c: ");
    scanf("%f",&c);
    soma = (a*a) + (b*b) + (c*c);
    printf("a soma dos quadrados dos 3 numeros eh %.2f",soma);

}
