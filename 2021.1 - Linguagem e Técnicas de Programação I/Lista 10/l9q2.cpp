/* LISTA 09 - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
 * LUIZ FERNANDO SILVA LEMOS
 * PROF: CRISTIANO FUSCHILO
 *
 * QUESTAO 02 - Ler o valor do raio de um circulo e calcular a área do calculo correspondente. A área do
 * circulo é de (pi * raio ^2). considere pi = 3,141592
 */

#include <stdio.h>
#define pi 3.141592
int main() {
    float raio, area;
    printf("insira o valor do raio de um circulo: ");
    scanf("%f",&raio);
    area = pi * (raio * raio);
    printf(" a area do circulo eh %.3f",area);

}
