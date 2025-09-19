#include <stdio.h>

int main() {
    int i, num=0;
    for (i=0; i<=1000; i++){
        if((i%3==0) or (i%5==0))
            num+=i;
    }
    printf("A Soma de todos os naturais abaixo de 1000 multiplos de 3 ou 5 eh: \n %d",num);
}
