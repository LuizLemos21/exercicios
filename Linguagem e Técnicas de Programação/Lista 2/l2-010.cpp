#include <stdio.h>
int main()
{
 int i, base, expoente,pot;
 scanf("%d",&base);
 printf("%d ^ ",base);
 scanf("%d",&expoente);
 pot = 1;
 if ((expoente > 1) && (base >= 2)){
 for (i=0;i<=expoente-1;i++){
 pot*= base;
 }
 printf("\nRESULTADO: %d",pot);
 } else {
 printf("COMANDOS INVALIDOS");
 }
 
}
