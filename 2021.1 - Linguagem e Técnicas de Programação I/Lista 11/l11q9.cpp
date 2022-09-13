#include <stdio.h>

int main() {
    int i,j, k, m, n,vetm[100],vetn[100],aux[1000],repete[100],rep,size=0,size2=0;
    printf("digite o tamanho do vetor m:");
    scanf("%d",&m);
    for(i=0;i<m;i++){
        printf("vetor m[%d]:",i+1);
        scanf("%d",&vetm[i]);
    }
    printf("digite o tamanho do vetor n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("vetor n[%d]:",i+1);
        scanf("%d",&vetn[i]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(vetm[i]==vetn[j]){
                aux[size] = vetn[j];
                size++;
            }
        }
    }

    for(i=0;i<size;i++){
        for (j=0;j<size;j++){
            rep = 0;
            if((aux[j]==aux[i])and(i != j)){
                for(k=0;k<size;k++){
                    if(repete[k]==aux[j])
                        rep=1;
                }
                if(rep==0){
                    repete[size2] = aux[i];
                    size2++;
                }
            }
        }
    }

    printf("VETOR M\n");
    for(i=0;i<m;i++){
        printf(" %d ",vetm[i]);
    }
    printf("\nVETOR N\n");
    for(i=0;i<n;i++){
        printf(" %d ",vetn[i]);
    }
    printf("\nINTERSECAO DE M e N:\n");
    for(i=0;i<size2;i++){
        printf(" %d ",repete[i]);
    }





}
