/******************************************************************************
LISTA 8 - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO   PROF: CRISTIANO FUSCHILO
LUIZ FERNANDO SILVA LEMOS

QUESTÃO 4.	Ler um número real, se o número for positivo imprima a raiz quadrada, se não imprima o número ao quadrado.
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(){
    float n1, raiz, quad;
    int i;
    printf("insira um numero:");
    scanf("%f",&n1);
    if (n1>0){
        for (i = 0; i < 10; ++i)
            raiz = sqrt(n1);
        printf("a raiz quadrada de %.2f eh %.2f",n1,raiz);
    } else {
        quad = n1 * n1;
        printf("o quadrado de %.2f eh %.2f",n1,quad);
    }
}
