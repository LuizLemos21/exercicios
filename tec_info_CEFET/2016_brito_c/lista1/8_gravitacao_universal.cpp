/*
8 - 3 massas M1,M2 e M3 estão separadas por distâncias R12, R13 conforme mostrado na figura.Se G é a constante de gravitação universal, a força de coesão para manter a massa das partículas deles é dado pela fórmula  F = G( m1m2/R12^2 + m1m3/R13^2 + m2m3/R23^2)
Faça um programa que leia as 3 massas (Kg) e as 3 distâncias (metros) e em seguida calcule a força de coesão.

G = 6,67 x 10-11 Nm2/Kg2

*/

#include <stdio.h>

int main(){
    //DECLARAÇÃO DE VARIÁVEIS E CONSTANTE G
    #define G 6.67e-11
    double m1, m2, m3, r12, r13, r23, f;
    
    //Leitura
    //massas
    printf("insira a massa 1 (em kg):");
    scanf("%lf",&m1);
    printf("insira a massa 2 (em kg):");
    scanf("%lf",&m2);
    printf("insira a massa 3 (em kg):");
    scanf("%lf",&m3);
    
    //distancias
    printf("insira a distância entre a massa 1 e a massa 2 (em metros)");
    scanf("%lf",&r12);
    printf("insira a distância entre a massa 1 e a massa 3 (em metros)");
    scanf("%lf",&r13);
    printf("insira a distância entre a massa 2 e a massa 3 (em metros)");
    scanf("%lf",&r23);

    //Calculo
    
    f = G * (((m1*m2)/(r12*r12)) + ((m1*m3)/(r13*r13)) + ((m2*m3)/(r23*r23)));
    
    //Mostrar Resposta
    printf("a força de coesão entre as massas é %.10e N", f);
}


//m1 = 5.972e24 (massa da Terra em kg)
//m2 = 7.348e22 (massa da Lua em kg)
//m3 = 1.989e30 (massa do Sol em kg)
//r12 = 3.844e8 (distância Terra-Lua em metros)
//r13 = 1.496e11 (distância Terra-Sol em metros)
//r23 = 1.496e11 (distância Lua-Sol em metros)
// RESULTADO ESPERAO: 3.5424e22 N