#include <stdio.h>
#include <string.h>
char str[100],l1,l2;
int i, size;
int main() {
    printf("digite uma string:\n");
    gets(str);
    printf("digite um caraactere contido nessa string:\n");
    scanf(" %c",&l1);
    printf("digite um caraactere para substitui-lo:\n");
    scanf(" %c",&l2);
    size = strlen(str);
    for(i=0;i<size;i++){
        if(str[i] == l1)
            str[i] = l2;
    }
    printf("string alterada \n %s ",str);

}
