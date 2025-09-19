#include <iostream>

int main() {
    int opcode;
    float num1, num2, res ;
    printf(" Escolha a op%c%co \n * 1 - Soma de 2 numeros \n * 2 - Diferenca de 2 numeros (maior pelo menor) \n * 3 - Produto entre 2 numeros \n * 4 - Divisao entre 2 numeros (o denominador nao pode ser 0)\n Op%c%co: ",135,198,135,198);
    scanf("%d",&opcode);
    if((opcode > 4) or (opcode < 1)){
        printf("Erro! Comando invalido!");
    } else {
        printf("insira um numero 1:");
        scanf("%f",&num1);
        printf("insira um numero 2:");
        scanf("%f",&num2);
    }
    switch (opcode) {
        case 1:
            res = num1 + num2;
            break;
        case 2:
            if (num1 > num2){
                res = num1 - num2;
            } else {
                res = num2 - num1;
            }
            break;
        case 3:
            res = num1 * num2;
            break;
        case 4:
            if (num2 == 0){
                printf("Invalido! denominador ");
            } else {
                res = num1/num2;
            }
            break;
    }
    printf("%.2f",res);

}
