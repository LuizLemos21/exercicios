#include <stdio.h>
#include <math.h>

float distancia(float a, float b, float c, float d){
    float x,y,res;
    x = b-a;
    y = d-c;
    res = sqrt((x*x)+(y*y));
    return res;
}

int main() {
    float x1,y1,x2,y2,dist;
    printf("digite as coordenadas do ponto 1\n x1:");
    scanf("%f",&x1);
    printf(" y1:");
    scanf("%f",&y1);
    printf("digite as coordenadas do ponto 2\n x2:");
    scanf("%f",&x2);
    printf(" y2:");
    scanf("%f",&y2);
    dist = distancia(x1,x2,y1,y2);
    printf("a distancia entre esses dois pontos eh %.2f",dist);
}
