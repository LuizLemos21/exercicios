#include <stdio.h>

int main() {
    char letra;
    printf("digite uma letra maiuscula:");
    scanf("%c",&letra);
    if ((letra < 91) and (letra > 40)){
        letra+=32;
    }
    printf("letra minuscula correspondente: %c",letra);

}
