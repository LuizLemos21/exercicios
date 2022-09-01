#include <stdio.h>

int main(){
 float hraul = 1.5;
 float hjose = 1.1;
 int anos = 0;
 
 while(hraul>hjose){
 hraul+= 0.02;
 hjose+= 0.05;
 anos++;
 }
 
 printf("Jose sera mais alto que Raul em %d anos",anos);
 
}
