#include <stdio.h>

int main() {
    int num, i;
    printf("insira um numero positivo");
    scanf("%d",&num);
    while (num < 0){
        printf("entrada invalida! Tente novamente\n");
        printf("insira um numero positivo");
        scanf("%d",&num);
    }
    printf("divisores de %d\n", num);
    for (i=num; i>0; i--){
        if ((num%i == 0) and (i != num)){
            printf(" %d ", i);
        }
    }
}
