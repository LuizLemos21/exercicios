#include <stdio.h>
int main(){
 // entrada de dados
 int estoque, pedido;
 printf("Digite o total de bebidas em estoque:");
 scanf("%d",&estoque);
 printf("Digite o total de bebidas que deve ser fornecido:");
 scanf("%d",&pedido);
 
 if(pedido > estoque){
 printf("Nao ha bebidas o suficientes para atender ao pedido.");
 
 } else {
 estoque -= pedido;
 printf("Pedido feito \n Estoque atualizado: %d bebidas",estoque);
 
 } 
 
 
 
 
}
