//Faça um programa que leia um caractere alfanumérico e diga se o mesmo é vogal, consoante, número, entre outros.

#include <stdio.h>
#include <ctype.h>

int main(){
    char carac, aux;

    printf("Digite um caractere: ");
    scanf("%c",&carac);

    aux = tolower(carac);

    if ((aux == 'a') || (aux == 'e') || (aux == 'i') || (aux == 'o') || (aux == 'u')){
        printf("%c eh vogal", carac);
    } else if (aux >= 97 && aux <= 112) {
        printf("%c eh consoante", carac);
    } else if (carac >= 48 && carac <= 57) {
        printf("%c eh um numero", carac);
    } else {
        printf("%c eh um caractere especial", carac);
    }
}

