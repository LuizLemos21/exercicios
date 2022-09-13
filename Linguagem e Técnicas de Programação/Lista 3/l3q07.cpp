/* 
 * LUIZ FERNANDO SILVA LEMOS 
 * LISTA DE LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO PROF: FUSCHILLO 
 * 
 * QUESTAO 07 
 * Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida, escreva o número de alunos cuja 
 * pior nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2, e o número de alunos cuja pior 
 * nota foi na prova 3. Em caso de empate das piores notas de um aluno, o critério de desempate é arbitrário, 
 * mas o aluno deve ser contabilizado apenas uma vez. 
 */
#include <stdio.h>
int main() {
 float mtz[10][3];
 int i,j;
 int menornota, menorn;
 int cont0 = 0;
 int cont1 = 0;
 int cont2 = 0;
 for (i=0;i<=9;i++){
 menornota = 10000;
 printf("ALUNO %d\n",i+1);
 for (j=0; j<=2; j++){
 printf("NOTA %d: ", j+1);
 scanf("%f",&mtz[i][j]);
 if(mtz[i][j] < menornota){
 menornota = mtz[i][j]; //Encontrando as piores notas de cada aluno e suas respectivas posições
 menorn = j;
 }
 }
 // Determinando a quantidade de piores notas para cada prova...
 switch (menorn){
 case 0:
 cont0++; break;
 case 1:
 cont1++; break;
 case 2:
 cont2++; break;
 }
 }
 printf("quantidade de alunos cuja pior nota foi a nota 1: %d \n", cont0);
 printf("quantidade de alunos cuja pior nota foi a nota 2: %d \n", cont1);
 printf("quantidade de alunos cuja pior nota foi a nota 3: %d \n", cont2);
}
