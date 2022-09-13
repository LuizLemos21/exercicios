#include <stdio.h>

int main() {
    float vet[5];
    int cod, i;
    for (i=0;i<5;i++){
        printf("insira um valor:");
        scanf("%f",&vet[i]);
    }
    printf("insira um codigo:");
    scanf("%d",&cod);
    while (cod != 0){
        if (cod == 1){
            printf("\nvetor em ordem direta\n");
            for (i=0;i<5;i++){
                printf(" %.2f ",vet[i]);
            }

        } else if (cod == 2){

            printf("\nvetor em ordem inversa\n");
            for (i=0;i<5;i++){
                printf(" %.2f ",vet[4-i]);
            }
        } else if(cod !=0){
            printf("\ncodigo invalido! Tente novamente.\n");
        }

        printf("\ninsira um codigo:");
        scanf("%d",&cod);

    }
}
