
#include <stdio.h>

int main(){
    int num;

    printf("insira um numero: ");
    scanf("%d",&num);

    if(num > 0){
        printf("esse numero eh positivo");
    } else if (num < 0) {
        printf("esse numero eh negativo");
    } else {
        printf("esse numero eh nulo");
    }
}