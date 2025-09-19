#include <stdio.h>

int main() {
    int numlinhas = 1, tamlinha, x=1;
    int n;
    printf("Insira um numero positivo");
    scanf("%d",&n);
    while (numlinhas<=n){
        for(tamlinha=1; tamlinha<=numlinhas; tamlinha++){
            printf("%3d",x);
            x++;
        }
        printf("\n");
        numlinhas++;
    }
}
