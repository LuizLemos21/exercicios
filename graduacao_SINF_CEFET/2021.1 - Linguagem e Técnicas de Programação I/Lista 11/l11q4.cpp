#include <stdio.h>

int main() {
    int ano, mes, dia, invalid = 0;

    printf("Insira um dia:");
    scanf("%d",&dia);
    printf("Insira um mes:");
    scanf("%d",&mes);
    printf("Insira um ano:");
    scanf("%d",&ano);


    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if ((dia < 1) or (dia > 31))
                invalid = 1;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if ((dia < 1) or (dia > 30))
                invalid = 1;
            break;
        case 2:
            if ((ano%100 == 0)or( ano%4 == 0)){
                if ((dia < 1) or (dia > 29))
                    invalid = 1;
            } else {
                if ((dia < 1) or (dia > 28))
                    invalid = 1;
            }
            break;
        default:
            invalid = 1;
    }

    if(invalid==1){
        printf("Data invalida!");
    } else {
        printf("Data: %d/%d/%d",dia,mes,ano);
    }


}
