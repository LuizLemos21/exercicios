/*
Faça um programa que leia nome, nota1 e nota2 de um aluno, em seguida calcule a média e informe se ele está aprovado,
 reprovado, ou em pf (média maior ou igual a 8.5 = aprovado; média menor ou igual a 5 = reprovado; senão: prova final.)
*/

#include <stdio.h>

int main(){
    char nome[30];
    float n1, n2, med;

    printf("insira o nome do aluno: ");
    scanf("%s",&nome);
    printf("insira as notas 1 e 2 do aluno: ");
    scanf("%f %f",&n1, &n2);

    med = (n1 + n2)/2;

    if (med >= 8.5){
        printf("aluno %s APROVADO! media: %.2f", nome, med);
    } else if (med <= 5) {
        printf("aluno %s REPROVADO! media: %.2f", nome, med);
    } else {
        printf("aluno %s em PF! media: %.2f", nome, med);
    }

    
}