#include <stdio.h>

int main() {
    int num,i,invert=0,alg=0;

    printf("insira um numero positivo de 3 digitos:");
    scanf("%d",&num);
    if((num>999) or (num<100)){
        printf("Numero invalido! Nao possue 3 digitos");
    } else {
        alg = (num%10);
        invert+=alg * 100;
        num-= alg;
        alg = num%100;
        invert+=alg;
        num-= alg;
        alg = num/100;
        invert+=alg;
        printf("Numero inverso: %d",invert);
    }
}
