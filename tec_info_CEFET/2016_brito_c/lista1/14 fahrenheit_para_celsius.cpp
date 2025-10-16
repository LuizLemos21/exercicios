#include <stdio.h>

int main(){
    float celsius, fahrenheit;
    printf("Entre com uma temperatura em fahrenheit: ");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit-32)/1.8;
    
    printf("a temperatura equivalente em celsius eh %.2f", celsius);



}