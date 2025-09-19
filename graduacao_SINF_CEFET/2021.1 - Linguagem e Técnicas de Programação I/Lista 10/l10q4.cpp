#include <stdio.h>

int main() {
   int i;
   printf("1 ate 100: for\n");
   for (i=1;i<=100;i++){
       printf("%4d",i);
   }
   printf("\n1 ate 100: while\n");
   i = 1;
   while (i<=100){
       printf("%4d",i);
       i++;
   }

   printf("\n1 ate 100: do while\n");
   i=1;
   do{
       printf("%4d",i);
       i++;
    } while (i<=100);

}
