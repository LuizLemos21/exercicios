#include <stdio.h>

int main() {
    float nota, soma=0, media = 0;
    int i;
    for(i=0;i<15;i++){
        printf("insira uma nota:");
        scanf("%f",&nota);
        soma+= nota;
    }
    media = soma/i;
    printf("a media das 15 notas eh %.2f",media);

}
