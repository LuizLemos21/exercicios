#include <stdio.h>
#include <cstdlib>
#include <string.h>



int main() {
   FILE *fp;
   int contlinha=0,i,j,k,size,conta=0,conta2=0;
   char palavra[99],texto[99][99],nomearq[99],busca[99],straux[99];
    printf("insira o nome do arquivo (nome.txt)");
    gets(nomearq);
   // LEITURA
   fp = fopen(nomearq,"r");
   if (fp==NULL){
       printf("Erro na abertura do arquivo\n");
       system("pause");
       exit(1);
   }

    printf("arquivo lido com sucesso! \n");
    printf("insira uma palavra para buscar no arquivo:");
    gets(busca);
    size = strlen(busca);

    while (fgets(palavra,99,fp)!=NULL){
        strcpy(texto[contlinha],palavra);
        contlinha++;
    }
    printf("buscando %s...\n",busca);


    for(i=0;i<=contlinha;i++){
        printf("%s",texto[i]);
        j = 0;
        while(texto[i][j] != '\0'){
            conta = 0;
            for(k=0; k<size;k++){
                if (busca[k] == texto[i][j+k]){
                    conta++;
                    if (conta == size){
                        conta2++;
                    }
                }

            }
        j++;

        }
    }
    printf("\n a string %s ocorre %d vezes no arquivo",busca,conta2);

    fclose(fp);



}
