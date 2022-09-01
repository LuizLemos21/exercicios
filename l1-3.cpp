#include <stdio.h>
int main(){
 int cod, base, expoente, pot,i;
 float lado, area, altura, bmaior, bmenor;
 printf("digite o codigo da operaçao:");
 scanf("%d", &cod);
 switch (cod) {
 
 case 1:
 printf("area do quadrado");
 printf("\n insira o valor do lado do quadrado:");
 scanf("%f",&lado);
 area = (lado * lado);
 printf("a área do quadrado é: %.2f", area);
 break;
 
 case 2: 
 printf("area de um retangulo");
 printf("\n insira o valor do lado do retangulo");
 scanf("%f",&lado);
 printf("\n insira o valor da altura do retangulo");
 scanf("%f",&altura);
 area = (lado * altura);
 printf("a área do retangulo é: %.2f", area);
 break;
 
 case 3:
 printf("area de um trapezio");
 printf("\n insira o valor da base maior do trapezio");
 scanf("%f",&bmaior);
 printf("\n insira o valor da base menor do trapezio");
 scanf("%f",&bmenor);
 printf("\n insira o valor da altura do trapezio");
 scanf("%f",&altura);
 area = ((bmaior + bmenor)/2) * altura;
 printf("a área do trapezio é: %.2f", area);
 break;
 
 case 4:
 
 printf("potenciacao");
 printf("\n digite o valor da base:");
 scanf("%d",&base);
 printf("\n digite o valor do expoente:");
 scanf("%d",&expoente);
 pot=1;
 while (i != expoente){
 pot=pot*base;
i=i+1;
}
 printf("%d elevado a %d é: %d",base,expoente,pot);
 break;
 
 default:
 printf("codigo inválido");
 }
}
