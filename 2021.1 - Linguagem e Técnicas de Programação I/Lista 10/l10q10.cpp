#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    int num, i=0;
    int bin[32];
    int aux, result, contlinhas, printer;


    fp = fopen("decbin.txt","w");
    if (fp == NULL){
        printf("Erro na Abertura do Arquivo!");
        system("pause");
        exit(1);
    }
    printf("Arquivo criado com sucesso!");
    fprintf(fp,"NUMEROS EM BINARIO \n");
    printf("\nquantos numeros vc deseja digitar? ");
    scanf("%d",&contlinhas);


    while (i < contlinhas){
        printf("Digite um numero em base decimal:");
        scanf("%d", &num);

        for (aux = 31; aux >= 0; aux--)
        {
            if (num % 2 == 0)
                bin[aux] = 0;
            else
                bin[aux] = 1;
            num = num / 2;
        }

        for (aux = 0; aux < 32; aux++){
            if (bin[aux] == 1){
                printer = aux;
                break;
            }
        }

        for (aux = printer; aux < 32; aux++)
            result = fprintf(fp,"%d",bin[aux]);
        result = fprintf(fp,"\n");


        i++;


    }


    }