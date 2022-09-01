#include <stdio.h>
int main(){
 int vet[6] = {1, 0, 5, -2, -5, 7};
 int soma = (vet[0] + vet[1] + vet[5]);
 int i;
 vet[4] = 100;
 printf("soma = %d \n",soma);
 for (i=0; i<=5; i++)
 printf(" %d ",vet[i]);
}
