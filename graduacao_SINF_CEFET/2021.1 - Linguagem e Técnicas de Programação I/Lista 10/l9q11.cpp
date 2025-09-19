#include <stdio.h>
#include <string.h>
int main() {
    char s1[40],s1alt[20],s2[20],s3[20],c1,c2;
    int size,pos,newsize,subsize,size3,i,j,checkrep=0,contarep = 0,contc1 = 0;
    printf("insira uma string de ate 20 caracteres: ");
    gets(s1);
    size = strlen(s1);
    if (size > 20){
        printf("tamanho fora dos limites!");
    } else {
        printf("tamanho = %d",size);
        printf("\ninsira uma segunda string: ");
        gets(s2);
        if (strcmp(s1,s2)){
            printf("as duas strings sao diferentes");
        } else {
            printf("as duas strings sao iguais");
        }

        strcat(s1,s2);
        newsize = strlen(s1);
        printf("\nconcatenacao das 2 strings:\n %s",s1);
        printf("\ns1 reversa : ");
        for(i=0;i<=newsize;i++){
            printf("%c",s1[newsize-i]);
        }
        printf("\ninsira um caractere c1");
        scanf("%c",&c1);
        for(i=0;i<=newsize;i++){
            if (c1 == s1[i])
                contc1++;
        }
        printf("\no caractere %c se repete %d vezes na string %s",c1,contc1,s1);
        printf("\ndigite outro caractere para substituir %c: ",c1);
        scanf(" %c",&c2);
        strcpy(s1alt,s1);
        for(i=0;i<=newsize;i++){
            if (c1 == s1alt[i])
                s1alt[i] = c2;
        }
        printf("string modificada: \n %s",s1alt);
        printf("\n insira uma nova string:");
        getchar();
        gets(s3);

        size3 = strlen(s3);
        for(i=0;i<=newsize;i++){
              for(j=0;j<=size3;j++){
                if (s3[j] == s1[i+j]){
                    contarep++;
                    if (contarep == size3){
                        checkrep = 1;
                    }

                }

              }

        }

        if (checkrep == 1){
            printf("\na string %s eh substring de %s",s3,s1);
        } else {
            printf("\na string %s NAO eh substring de %s",s3,s1);
       }


        printf("\ndigite uma posicao na string a partir da qual deseja obter uma substring:");
        scanf("%d",&pos);
        printf("digite o tamanho da substring desejada");
        scanf("%d",&subsize);
        if ((subsize + pos) > newsize ){
            subsize = (newsize - pos);
        }
        printf("substring: \n");
        for(i=pos;i<pos+subsize;i++){
            printf("%c",s1[i]);
        }


    }




}
