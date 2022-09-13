#include <stdio.h>

int main() {
    float a, b, c;
    printf("insira os tres lados de um triangulo:");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if ((a+b>c) and (b+c > a) and (c+a > b)){
        if ((a==b) and (b==c)){
            printf("triangulo equilatero");
        } else if ((a==b) or (b==c)){
            printf("triangulo isoceles");
        } else {
            printf("triangulo escaleno");
        }
    } else {
        printf("esse triangulo nao atende as condicoes de existencia");
    }
}
