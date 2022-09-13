
#include <stdio.h>

int main() {
    float pes, alt;
    char categ;
    printf("insira uma altura:");
    scanf("%f",&alt);
    printf("insira um peso:");
    scanf("%f",&pes);

    if (alt < 1.2){
        if (pes < 60)
           categ = 'A';
        else if (pes > 90)
            categ = 'G';
        else
            categ = 'D';

    } else if (alt > 1.7){
        if (pes < 60)
            categ = 'C';
        else if (pes > 90)
            categ = 'I';
        else
            categ = 'F';

    } else {
        if (pes < 60)
            categ = 'B';
        else if (pes > 90)
            categ = 'H';
        else
            categ = 'E';
    }

    printf("essa pessoa se encontra na classificacao %c",categ);
}
