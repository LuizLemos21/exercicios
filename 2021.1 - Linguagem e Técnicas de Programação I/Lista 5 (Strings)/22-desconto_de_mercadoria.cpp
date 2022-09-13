// QUESTAO 22. Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o desconto para pagamento a vista é de 10% sobre o valor total, calcular o valor a ser pago a vista. Escrever o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago a vista.
#include <stdio.h>
#include <string.h>
int main(){
 int i;
 char name[99];
 float precototal,precovista;
 printf("digite o nome da mercadoria: ");
 gets(name);
 printf("digite o preco da mercadoria: ");
 scanf("%f",&precototal);
 precovista = precototal * 0.90;
 printf("\nMercadoria: %s \n Preco total: %.2f \n Desconto: 10%% \n Preco a ser pago a vista: %.2f",name,precototal,precovista);
}
