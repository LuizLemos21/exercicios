//Faça um programa que leia a sigla do estado de uma pessoa e imprima uma das mensagens abaixo (“carioca”, “paulista”,”mineiro”, etc.)

#include <stdio.h>
#include <string>

int main(){
    char uf[3];
    
    printf("entre com a sua unidade federativa (UF): ");
    scanf("%s", &uf);

    //TODO: Transformar o input em UPPER CASE

    if (uf == "AC")
        printf("acreano");
    if (uf == "AL")
        printf("alagoense");
    if (uf == "AM")
        printf("amapaense");
    if (uf == "AM")
        printf("amazonense");
    if (uf == "BA")
        printf("baiano");
    if (uf == "CE")
        printf("cearense");
    if (uf == "DF")
        printf("brasiliense");
    if (uf == "ES")
        printf("capixaba");
    if (uf == "GO")
        printf("goiano");
    if (uf == "MA")
        printf("maranhense");
    if (uf == "MT")
        printf("mato-grossense");
    if (uf == "MS")
        printf("sul-mato-grossense");
    if (uf == "MG")
        printf("mineiro");
    if (uf == "PA")
        printf("paraense");
    if (uf == "PB")
        printf("paraibano");
    if (uf == "PR")
        printf("paranaense");
    if (uf == "PE")
        printf("pernambucano");
    if (uf == "PI")
        printf("piauiense");
    if (uf == "RJ")
        printf("fluminense");
    if (uf == "RN")
        printf("potiguar");
    if (uf == "RS")
        printf("gaucho");
    if (uf == "RD")
        printf("rondoniense");
    if (uf == "RA")
        printf("roraimense");
    if (uf == "SC")
        printf("catarinense");
    if (uf == "SP")
        printf("paulista");
    if (uf == "SE")
        printf("sergipano");
    if (uf == "TO")
        printf("tocantinense");

   
}