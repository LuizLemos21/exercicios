#include <stdio.h>
#include <cstdlib>
#include <string.h>



int main() {
    FILE *fp, *fp2;
    int contlinha=0,i,j,sizepalavra, result;
    char palavra[30],texto[99][30],nomearqent[99],nomearqext[99];

    printf("insira o nome do arquivo que deseja ler (nome.txt)");
    gets(nomearqent);
    // LEITURA
    fp = fopen(nomearqent,"r");
    if (fp==NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }

    printf("arquivo lido com sucesso! \n");


    while (fgets(palavra,99,fp)!=NULL){
        //strcpy(texto[contlinha],palavra);
        sizepalavra = strlen(palavra);
        j = sizepalavra-1;
        for(i=0; i<sizepalavra; i++){
            texto[contlinha][j] = palavra[i];
            j--;
        }

        contlinha++;
    }
fclose(fp);


printf("\ndigite o nome do arquivo de saida:");
gets(nomearqext);
fp2 = fopen(nomearqext,"w");
if (fp2==NULL){
    printf("Erro na abertura do arquivo!\n");
    system("pause");
    exit(1);
}
printf("arquivo criado com sucessso!");

for(i=0;i<=contlinha;i++){
   result = fprintf(fp2,"%s\n",texto[i]);
   if(result == EOF){
       printf("Erro na Gravacao!!! \n");
   }
}
    fclose(fp2);

}




