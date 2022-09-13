/******************************************************************************
LISTA 8 - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO PROF: CRISTIANO FUSCHILO
LUIZ FERNANDO SILVA LEMOS

QUESTÃO 10.	Ler nome, sexo e idade, se:
    a.	sexo for masculino e idade maior que 0 e menor que 11. Imprime: “Menino + nome da pessoa “
    b.	sexo for feminino e idade maior que 0 e menor que 11. Imprime: “Menina + nome da pessoa “
    c.	sexo for masculino e idade maior ou igual a 11 e menor que 20. Imprime: “Rapaz + nome da pessoa “
    d.	sexo for feminino e idade maior ou igual a 11 e menor que 20. Imprime: “Moça + nome da pessoa “
    e.	sexo for masculino e idade maior ou igual a 20. Imprime: “Adulto + nome da pessoa “
    f.	sexo for feminino e idade maior ou igual a 20. Imprime: “Adulta + nome da pessoa “
********************************************************************************/

#include <stdio.h>
#include <string.h>

int main(){
    char nome[99],sexo[15];
    int i, idade,size;

    printf("digite um nome:");
    gets(nome);
    printf("digite o sexo: (masculino/feminino)");
    gets(sexo);
    printf("digite a idade:");
    scanf("%d",&idade);
    size = strlen(sexo);
    for(i=0;i<size;i++){
        if(sexo[i] < 91)
            sexo[i]+= 32;
    }

    if (strcmp(sexo,"masculino") == 0){
        if (idade < 11){
            printf("Menino %s",nome);
        } else if(idade < 20){
            printf("Rapaz %s",nome);
        } else {
            printf("Adulto %s",nome);
        }
    } else if (strcmp(sexo,"feminino") == 0){
        if (idade < 11){
            printf("Menina %s",nome);
        } else if(idade < 20){
            printf("Mo%ca %s",135,nome);
        } else {
            printf("Adulta %s",nome);
        }
    } else {
        printf("sexo invalido, tente novamente!");
    }


}