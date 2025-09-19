#include <stdio.h>
#define PREMIO 780000
int main() {
    float prim, seg, terc;
    prim = PREMIO * 0.46;
    seg = PREMIO * 0.32;
    terc = PREMIO - prim - seg;

    printf("\na quantia ganha pelo primeiro ganhador: %.2f",prim);
    printf("\na quantia ganha pelo segundo ganhador: %.2f",seg);
    printf("\na quantia ganha pelo terceiro ganhador: %.2f",terc);


}
