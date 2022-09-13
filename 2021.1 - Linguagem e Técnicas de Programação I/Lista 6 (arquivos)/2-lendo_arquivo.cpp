#include <stdio.h>
#include <cstdlib>
int main() {
 FILE *fp;
 char c, carac[99];
 int i = 0;
 char *result;

 //LEITURA
 fp = fopen("arq.txt","r");
 if (fp==NULL){
 printf("Erro na abertura do arquivo \n");
 system("pause");
 exit(1);
 }

 printf("arquivo lido com sucesso! \n");

 while(fgets(carac,2,fp)!=NULL)
 printf("%s",carac);
 fclose(fp);
}
