#include <stdio.h>

int main(){
    int num, soma = 0, somapar = 0, quant = 0,  maior = 0, menor = 0,quantpar=0;
    float  media = 0, medpar = 0;
    printf("insira um numero (0 encerra a sequencia):");
    scanf("%d",&num);
    maior = num;
    menor = num;

    while (num != 0){
        soma+= num;
        quant++;
        if (num%2==0){
            quantpar++;
            somapar+= num;
        }
        if (num >= maior)
            maior = num;

        if (num <= menor)
            menor = num;

        printf("insira um numero (0 encerra a sequencia):");
        scanf("%d",&num);
    }
    media = (soma/quant);
    medpar = (somapar/quantpar);
    printf("\nsoma dos numeros digitados: %d",soma);
    printf("\nquantidade dos numeros digitados: %d",quant);
    printf("\nmedia dos numeros digitados: %.2f",media);
    printf("\nmaior numero digitado: %d",maior);
    printf("\nmenor numero digitado: %d",menor);
    printf("\nmedia de numeros pares: %.2f",medpar);
}
