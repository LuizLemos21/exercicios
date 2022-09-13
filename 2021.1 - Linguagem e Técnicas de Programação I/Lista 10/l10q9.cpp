#include <stdio.h>
#include <string.h>

int main() {
    char str[4];
    int chartoint = 0, i;
    printf("digite um dia da semana (abreviado):");
    gets(str);
    // para que uma entrada aleatoria que por acaso seja igual a soma de algum dia nao seja registrada
    if ((strcmp(str,"seg") == 0) or (strcmp(str,"ter") == 0) or (strcmp(str,"qua") == 0) or (strcmp(str,"qui") == 0) or (strcmp(str,"sex") == 0) or (strcmp(str,"sab") == 0) or (strcmp(str,"dom") == 0)){
        for (i=0;i<3;i++)
            chartoint+= str[i]; // converte a string em int para que possa ser usada no case switch

        switch (chartoint) {
            case 319:
                printf("segunda-feira"); break;
            case 331:
                printf("terca-feira");break;
            case 327:
                printf("quarta-feira");break;
            case 335:
                printf("quinta-feira");break;
            case 336:
                printf("sexta-feira");break;
            case 310:
                printf("sabado");break;
            case 320:
                printf("domingo");break;
        }
    } else {
        printf("dia invalido!");
    }
}
