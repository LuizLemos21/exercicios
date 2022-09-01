/* LUIZ FERNANDO SILVA LEMOS 
 * LISTA DE LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO PROF: FUSCHILLO 
 * QUESTAO 8 
 * 
Faça um programa para gerar automaticamente números 
entre 0 e 99 de uma cartela de bingo. 
Sabendo que cada cartela deverá conter 5 linhas de 5 
números, gere estes dados de modo a não ter números 
repetidos dentro das cartelas. O programa deve exibir na 
tela a cartela gerada. 
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
 int bingo[5][5], numero, i,j,k;
 for (i = 0; i <= 4; i++){
 for (j = 0; j <= 4; j++){
 numero = ( rand() %100 ); //GERANDO UM NUMERO ALEATORIO
 k = 0;
 while (k < 5){
 if (bingo[i][k] == numero){ // DETERMINANDO SE TAL NUMERO JÁ SE ENCONTRA NA TABELA
 numero = ( rand() %100 );
k = 0;
 }
 k++;
 }
 bingo[i][j] = numero; // SE NÃO, O NUMERO É INCLUIDO
 }
}
 for (i = 0; i <= 4; i++){
 printf("\n");
 for (j = 0; j <= 4; j++){
 printf("%d ",bingo[i][j]); // EXIBINDO A TABELA
 }
 }
}
