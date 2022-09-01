//QUESTAO 30. Faça um programa para ler uma tabela contendo os nomes dos alunos de uma turma de 5 alunos. O programa deve solicitar ao usuário os nomes do aluno, sempre perguntando se ele deseja inserir mais um nome na lista. Uma vez lidos todos os alunos, o usuário ira indicar um nome que ele deseja verificar se está presente na lista, onde o programa deve procurar pelo nome (ou parte deste nome) e se encontrar deve exibir na tela o nome completo e o índice do vetor onde está guardado este nome.
#include <stdio.h>
#include <string.h>
int main() {
 char aluno[5][99],continuar,pesquisa[99],aux[99];
 int i=0,j,size,sizeb, cont;
 int l,k;
 while ((continuar != 'n') and i < 5){
 printf("digite o nome completo de um aluno: ");
 gets(aluno[i]);
 i++;
 printf("deseja continuar? (y/n):");
 scanf(" %c",&continuar);
 if (continuar<97) continuar+=32;
 getchar();
 }
 printf("pesquise por um aluno:");
 gets(pesquisa);
 sizeb = strlen(pesquisa);
 cont = -1;
 for(i=0;i<=5;i++){
 if (strstr(aluno[i],pesquisa)!= NULL){
 printf("\nAluno(a) encontrado(a)!: %s - posi%c%co %d", aluno[i],135,198,i);
 }
 }
}
