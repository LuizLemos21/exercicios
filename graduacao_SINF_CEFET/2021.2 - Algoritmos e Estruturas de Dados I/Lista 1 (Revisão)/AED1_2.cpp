#include <stdio.h>

int ePositivo(int n){
    if (n>0)
        return 1;
    else
        return 0;
}

int SomaDivisores(int n){
    int j, soma=0;
    j=n-1;
    while (j>0){
        if (n%j==0)
            soma+=j;
        j--;
    }
    return soma;
}

int main() {
  int i, num[5];
  for (i=0;i<5;i++){
      printf("insira um numero: ");
      scanf("%d",&num[i]);
      if (ePositivo(num[i])){
          printf("a soma dos divisores de %d eh: %d\n",num[i],SomaDivisores(num[i]));
      } else {
          printf("a operacao nao pode ser feita pois o numero nao eh positivo!\n");
      }
  }
}
