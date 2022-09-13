#include <stdio.h>
#include <string.h>
// criando a estrutura
struct Pessoa{
    char nome[99];
    int idade;
    char sexo[10];
    float peso;
};
int main() {
    // atribuicao de valores
    struct Pessoa pessoa1;
    strcpy(pessoa1.nome,"Joao");
    pessoa1.idade = 15;
    strcpy(pessoa1.sexo,"Masculino");
    pessoa1.peso = 83.5;

    //Leitura de valores
    struct Pessoa pessoa2;
    printf("digite o nome da pessoa");
    gets(pessoa2.nome);
    printf("digite a idade da pessoa");
    scanf("%d",&pessoa2.idade);
    printf("digite o sexo da pessoa");
    getchar();
    gets(pessoa2.sexo);
    printf("digite o peso da pessoa");
    scanf("%f",&pessoa2.peso);

    // impressão de valores

    printf("Nome: %s\n",pessoa1.nome);
    printf("Idade: %d anos\n",pessoa1.idade);
    printf("Sexo: %s\n",pessoa1.sexo);
    printf("Peso: %.2f Kg\n\n",pessoa1.peso);
    printf("Nome: %s\n",pessoa2.nome);
    printf("Idade: %d anos\n",pessoa2.idade);
    printf("Sexo: %s\n",pessoa2.sexo);
    printf("Peso: %.2f Kg",pessoa2.peso);


}
