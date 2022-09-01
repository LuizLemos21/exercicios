#include <stdio.h>
int main(){
 int op;
 float raio, resultado;
 
 printf("insira a operação desejada:");
 scanf("%d",&op);
 switch (op){
 case 1:
 printf("insira o raio da circunferencia:");
 scanf("%f",&raio);
 
 resultado = 3.14 * (raio * raio);
 printf("a area desta circunferencia e: %.2f:",resultado);
 break; 
 case 2:
 
 printf("insira o raio da circunferencia:");
 scanf("%f",&raio);
 
 resultado = 2 * 3.14 * raio; 
 printf("o raio desta circunferencia e: %.2f:",resultado);
 break;
 default:
 printf("operacao invalida");
 }
 
 
 
}

 
 
}
