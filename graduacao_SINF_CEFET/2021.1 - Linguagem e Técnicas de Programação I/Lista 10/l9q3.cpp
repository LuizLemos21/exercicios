/* LISTA 09 - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
 * LUIZ FERNANDO SILVA LEMOS
 * PROF: CRISTIANO FUSCHILO
 *
 * QUESTAO 03 - Faça um programa que receba 3 numeros e mostre-os em ordem crescente.
 */
#include <stdio.h>
#define TAM 3
int main()
{

    int numeros[TAM];
    int i, aux, contador;
    printf("Insira 3 numeros:\n");
    for (i = 0; i < TAM; i++) {
        scanf("%d", &numeros[i]);
    }

    // Algoritmo de ordenação Bubblesort:
    for (contador = 1; contador < TAM; contador++) {
        for (i = 0; i < TAM - 1; i++) {
            if (numeros[i] > numeros[i + 1]) {
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
        }
    }
    printf("\nNumeros ordenados:\n");
    for (i = 0; i < TAM; i++) {
        printf(" %d ", numeros[i]);
    }


}

