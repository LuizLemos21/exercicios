#include <stdio.h>
int main() {
 int veta[10], vetb[10], vetc[20];
 int i ;
// LEITURA DOS VETORES A E B
 for (i = 0; i <= 19; i++) {
 if(i<=9){
 printf("vetor a[%d]: ", i);
 scanf("%d", &veta[i]);
 } else{
 printf("vetor b[%d]: ", i-10);
 scanf("%d", &vetb[i-10]);
 }
 }
 // PROCESSAMENTO DO VETOR C
printf("vetor C: \n");
 for (i=0;i<=19; i++){
 if (i%2 == 0){
 vetc[i] = veta[i/2];
 } else{
 vetc[i] = vetb[i/2];
 }
 printf("%d ", vetc[i]); //SAIDA DE DADOS
 }
}
