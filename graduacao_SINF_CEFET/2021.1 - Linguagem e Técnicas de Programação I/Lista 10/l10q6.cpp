#include <stdio.h>

int main(){
    int a=0,i,j,k,repete;
    int vetor[10],iguais[10];

    for(i=0;i<10;i++){
        printf("Insira um valor %d: ",i+1);
        scanf("%d",&vetor[i]);
    }
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            repete=0;
            if(vetor[i]==vetor[j] && i != j){
                for(k=0; k < 10; k++){
                    if(iguais[k] == vetor[j])/* se o numero já estiver nesse vetor de iguais */
                        repete=1;
                }
                if(repete == 0){
                    iguais[a]=vetor[i];
                    a++;
                }
            }
        }
    }
    printf("VALORES REPETIDOS:\n");
    for(i=0; i<a; i++){
        printf("%d ",iguais[i]);
    }

}