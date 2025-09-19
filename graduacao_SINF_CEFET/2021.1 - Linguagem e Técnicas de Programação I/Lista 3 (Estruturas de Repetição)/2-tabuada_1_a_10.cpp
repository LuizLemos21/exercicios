#include <stdio.h>
int main()
{
 int i,j,multiplicacao;
 
 for(i=1; i<=10; i++){
 
   printf("TABUADA DE %d\n",i);
 
    for (j=1; j<=10; j++){
 
      multiplicacao = (i*j);
      printf("%d x %d = %d \n",i,j,multiplicacao);
 
 
    }
 }
 
}
