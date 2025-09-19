#include <stdio.h>
float calculaMedia(float n1, float n2, float n3, char codigo){
    float res;
    switch (codigo) {
        case 'A':
            res = (n1+n2+n3)/3; break;
        case 'P':
            res = (n1*5 + n2*3 + n3*2)/(5+3+2); break;
        case 'H':
            res = 3/((1/n1)+(1/n2)+(1/n3)); break;
        default:
            res = -1;  //ERRO
    }
    return res;
}

int main() {
    char opcode; int i;
    float nota[3],media;
    for(i=0;i<3;i++){
        printf("insira a nota %d:",i+1);
        scanf("%f",&nota[i]);
    }
    printf("digite o tipo de media a ser calculada (A/P/H):");
    scanf(" %c",&opcode);
    media = calculaMedia(nota[0],nota[1],nota[2],opcode);
    if (media>0){
        printf("A media selecionada para essas notas eh: %.2f",media);
    } else {
            printf("Erro! Operacao Invalida!");
        }
}
