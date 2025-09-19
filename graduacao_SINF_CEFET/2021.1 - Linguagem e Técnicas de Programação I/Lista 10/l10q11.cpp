#include <stdio.h>
#include <cstdlib>
#include <string.h>
#include <math.h>
int main() {
    FILE *fp;
    char  mercadoria[50];
    float preco=0, soma=0;




    //LEITURA
    fp = fopen("estoque.txt","r");
    if (fp==NULL){
        printf("Erro na abertura do arquivo \n");
        system("pause");
        exit(1);
    }
    printf("Arquivo aberto com sucesso!");

    while (!feof(fp)){
        fscanf(fp,"%s %f",mercadoria,&preco);
        soma+= preco;
    }
    printf("\no preco total da compra eh R$ %.2f",soma);
    fclose(fp);
}
