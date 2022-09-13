#include <stdio.h>
#include <string.h>
int main() {
    int i, size, cont = 0;
    char frase[99];
    printf("insira uma string:");
    gets(frase);
    size = strlen(frase);
    for (i = 0; i <= size; i++) {
        if (frase[i] == ' '){
            cont++;
        }
    }
    printf("quantidade de espacos em branco: %d",cont);
}
