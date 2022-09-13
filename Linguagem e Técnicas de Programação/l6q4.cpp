/* LISTA 06
 * LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO PROF: CRISTIANO FUSCHILO
 * LUIZ FERNANDO SILVA LEMOS
 *
 *
 * QUESTAO 04 - 4. Faça um programa que leia um arquivo contendo o nome e a situação de estoque S para “ Sim, em estoque” o N para “Sem estoque”. O programa procurará o produto escolhido pelo usuário e dirá se há ou não estoque! Mostrar os nomes dos produtos para que o usuário faça sua escolha!
*/
#include <stdio.h>
#include <cstdlib>
#include <string.h>
int main() {
 FILE *fp;
 char mercadoria[50], estoque[50][50],situacao[50];
 int cont,size;
 int i=0; int j = 0;
 char *result;
 //LEITURA
 fp = fopen("estoque.txt","r");
 if (fp==NULL){
 printf("Erro na abertura do arquivo \n");
 system("pause");
 exit(1);
 }
 printf("Estoque: \n");
 while(fgets(estoque[i],50,fp)!=NULL){
 j=0;
 while(estoque[i][j] != '\0'){
 switch (estoque[i][j]){
 case 'N':
 situacao[i] = estoque[i][j];
estoque[i][j] = '\0';
 break;
 case'S':
 situacao[i] = estoque[i][j];
estoque[i][j] = '\0';
 break;
 }
 j++;
 }
 printf("%s\n",estoque[i]);
 i++;
 size = i;
 }
 printf("\n selecione um produto do estoque:\n");
 gets(mercadoria);
 j = -1;
 for (i=0;i<=size;i++){
 if (strcmp(mercadoria,estoque[i])==0){
 switch (situacao[i]) {
 case 'N':
 printf("Sem estoque");
break;
 case 'S':
 printf("Sim, em estoque");
break;
 }
 } else j++;
 if (j == size) printf("Esse produto nao se encontra no nosso catalogo.");
 // printf("%d %d\n", size, j);
 }
 fclose(fp);
}
