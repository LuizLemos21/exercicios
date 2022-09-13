#include <stdio.h>
#include <cstdlib>
int main() {
    FILE *fp,*fp2;
    fp = fopen("arq.txt","w");
    int result;
    char carac[99];
    int i = 0;

    printf("digite uma sequencia de caracteres finalizada com 0");
    scanf("\n %c",&carac[0]);
    while (carac[i]!='0'){
        i++;
        scanf("\n %c",&carac[i]);
    }
   // printf("%s",carac);
    if(fp==NULL){
        printf("Erro na abertura do arquivo \n");
        system("pause");
        exit(1);
    }
    printf("Arquivo aberto com sucesso!\n");
    result = fputs(carac,fp);
    if (result == EOF)
        printf("Erro na gravacao\n");
    else
        printf("Gravacao de caracteres feita com sucesso");
    fclose(fp);

    fp2 = fopen("arq.txt","r");
    if (fp2 == NULL ){
        printf("");
        system("pause");
        exit(1);
    }
    printf("Lendo arquivo...\n");
    while (fgets(carac,99,fp2)!=NULL)
        printf("%s",carac);
    fclose(fp2);

}
