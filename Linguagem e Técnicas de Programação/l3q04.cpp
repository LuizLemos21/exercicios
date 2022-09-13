#include <stdio.h>
int main (){
 int mtx[4][4];
 int i, j;
 for (i=0; i<=3; i++){
 for(j=0; j<=3; j++){
 mtx[i][j] = (i * j); // produto da linha com coluna
 }
 }
 for (i=0; i<=3; i++){
 printf("\n");
 for(j=0; j<=3; j++){
 printf(" %d ",mtx[i][j]); //saida do resultado
 }
 }
}
