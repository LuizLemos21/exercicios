#include <stdio.h>

int main() {
    int i, A[10],B[10],C[10];
    printf("prencha um vetor A de 10 posicoes\n");
   for (i=0;i<10;i++){
       scanf("%d",&A[i]);
   }
   printf("prencha um vetor B de 10 posicoes\n");
   for (i=0;i<10;i++){
       scanf("%d",&B[i]);
   }
    printf("Vetor C = A-B\n");
   for (i=0;i<10;i++){
       C[i] = A[i] - B[i];
       printf(" %d,",C[i]);
   }

}
