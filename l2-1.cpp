#include <stdio.h>
int main() {
 int num, i, soma;
 printf("INSIRA UM NÚMERO:");
 scanf("%d",&num);
 
 printf("20 ANTECESSORES\n");
 for(i=0; i<=20; i++){
  soma = num - i;
 printf("%d\n",soma);
}
  
 printf("20 SUCESSORES\n");
 for(i=0; i<=20; i++){
   soma = num + i;
    printf("%d\n",soma);
 }
}
