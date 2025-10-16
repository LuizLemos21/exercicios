#include <stdio.h>

int main(){
    float celsius, fahrenheit;
    printf("Entre com uma temperatura em celsius: ");
    scanf("%f",&celsius);

    fahrenheit = (celsius*1.8) + 32;
    
    printf("a temperatura equivalente em fahrenheit eh %.2f", fahrenheit);



}