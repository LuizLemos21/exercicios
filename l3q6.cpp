#include <stdio.h>
int main() {
 int mtz[3][6];
 int somaimp, cont, aux[6];
 float med24 = 0;
 int i, j;
 j = 0;
 somaimp = 0;
 cont = 0;
 med24 = 0;
 for(i=0; i<=2; i++){
 for(j=0; j<=5; j++){
 printf("mtz[%d][%d]:",i+1,j+1);
 scanf("%d",&mtz[i][j]);
 //SOMANDO ELEMENTOS DE COLUNAS IMPARES
 if ((j % 2) != 0) somaimp+= mtz[i][j];
 //OBTENDO A MEDIA DOS ELEMENTOS DAS COLUNAS 2 e 4
 if ((j==2) or (j==4)){
 med24+= mtz[i][j] ;
 cont++;
 }
 // SUBSTITUINDO OS ELEMENTOS DA 6ªCOLUNA PELA SOMA DOS ELEMENTOS DAS COLUNAS 1 E 2
 if (j==5) mtz[i][j] = mtz[i][0] + mtz[i][1];
 }
 }
 printf("soma dos elementos das colunas impares: %d", somaimp);
 printf("\nmedia dos elementos das colunas 2 e 4: %.2f", (med24/cont));
 printf("\nMATRIZ MODIFICADA:");
 for(i=0; i<=2; i++){
 printf("\n");
 for(j=0; j<=5; j++){
 printf("%d ",mtz[i][j]);
 }
 }
}
