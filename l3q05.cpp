#include <stdio.h>
int main(){
 int mtz[10][10];
 int i, j;
// GERANDO E IMPRIMINDO A MATRIZ
 for (i=0; i<=9; i++){
 printf("\n");
 for (j=0; j<=9; j++){
 if (i<j){
 mtz[i][j] = ((2*i + 7*j)-2);
 } else if (i>j){
 mtz[i][j] = ((3*i * i) - 1);
 } else{
 mtz[i][j] = ((4*i*i*i) - (5 * j * j) + 1);
 }
 printf("%d ",mtz[i][j]);
 }
 }
}
