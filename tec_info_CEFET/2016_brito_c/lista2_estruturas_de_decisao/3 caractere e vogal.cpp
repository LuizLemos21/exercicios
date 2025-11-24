//Faça um programa que leia um caractere alfanumérico e diga se o mesmo é vogal

#include <stdio.h>
#include <cctype>

int main(){
    char carac;
    printf ("Digite um caractere: ");
    scanf("%c", &carac);

    if ((tolower(carac) == 'a') || (tolower(carac) == 'e')  || (tolower(carac) == 'i')  || (tolower(carac) == 'o')  || (tolower(carac) == 'u')){
        printf("%c eh vogal", carac);
    } else {
        printf("%c NAO eh vogal", carac);
    }
}