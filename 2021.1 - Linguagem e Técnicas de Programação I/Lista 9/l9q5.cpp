#include <stdio.h>

int main() {
    int i, soma=0;

    for (i=0;i<=50;i++)
        if ((i%2) == 0)
            soma+= i;

 printf(" a soma dos numeros pares entre 1 e 50 eh %d",soma);

}
