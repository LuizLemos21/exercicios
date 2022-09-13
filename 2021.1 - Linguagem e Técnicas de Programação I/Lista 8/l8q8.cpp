/******************************************************************************
LISTA 8 - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO PROF: CRISTIANO FUSCHILO
LUIZ FERNANDO SILVA LEMOS

QUESTÃO 8.	Escreva um programa que leia n números inteiros no intervalo [0~50] e
 os armazene em um vetor estaticamente alocado com 100 posições. Preencha um
 segundo vetor, também alocado estaticamente, apenas com os números ímpares do
 primeiro vetor. Imprima os dois vetores, 10 elementos por linha.
*******************************************************************************/

 #include <stdio.h>

int main(){
    int vet[100],vet2[100],i,j,sizea,sizeb;
    i=0;

    // preenchendo o vetor 1

    printf("insira um numero entre 0 e 50");
    scanf("%d",&vet[i]);
    while((vet[i] >= 0) and (vet[i] <= 50) and i<100 ){
        i++;
        printf("insira um numero entre 0 e 50");
        scanf("%d",&vet[i]);
    }
    sizea = i;                                          // tamanho util do vetor (até onde estão os numeros inseridos)

    // COLOCANDO OS NUMEROS IMPARES NO VETOR 2
    for (i=0,j=0; i < sizea; i++){
        if ((vet[i] % 2)==1){
            vet2[j] = vet[i];                           // SEMPRE QUE O NUMERO FOR IMPAR O PROGRAMA COLOCARÁ ESSE VALOR NA POSIÇÃO J DO VETOR B
            j++;                                        // A POSIÇÃO J SÓ IRÁ INCREMENTAR QND A CONDIÇÃO ANTERIOR FOR VERDADEIRA, PARA O VETOR B NÃO FIQUE COM POSIÇÕES NULAS
        }

    }
    sizeb = j;                                          // TAMANHO UTIL DO VETOR 2

    // IMPRIMINDO OS DOIS VETORES 10 VALORES POR LINHA

    printf("vetor original:\n");
   for (i=0; i < sizea; i++){
        printf("%d ",vet[i]);
        if ((i+1)%10 == 0)
            printf("\n");                       // SEMPRE QUE O I+1 (9) FOR MULTIPLO DE 10 QUEBRAR LINHA
    }
   printf("\nvetor com numeros impares:\n");
   for (i=0; i < sizeb; i++){
       printf("%d ",vet2[i]);
       if ((i+1)%10 == 0)                               // SEMPRE QUE O I+1 (9) FOR MULTIPLO DE 10 QUEBRAR LINHA
           printf("\n");
   }

}
