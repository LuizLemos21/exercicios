#include <stdio.h>
// CRIAÇÃO DA ESTRUTURA
struct NumComplexo{
    int preal;
    int pimag;
};

// FUNCAO printaSoma

void printaSoma(int a, int ai, int b, int bi){
    int somaR, somaI;
    somaR= a+b;
    somaI= ai+bi;
    printf("A Soma dos dois numeros complexos eh: \n %d + %di",somaR,somaI);
}
int main() {
    struct NumComplexo z1;
    struct NumComplexo z2;
// LEITURA DE CAMPOS
    printf("SOMA DE NUMEROS COMPLEXOS\n");
    printf("Digite a parte real de z1");
    scanf("%d",&z1.preal);
    printf("Digite a parte imaginaria de z1");
    scanf("%d",&z1.pimag);
    printf("Z1 = %d + %di\n",z1.preal,z1.pimag);
    printf("Digite a parte real de z2");
    scanf("%d",&z2.preal);
    printf("Digite a parte imaginaria de z2");
    scanf("%d",&z2.pimag);
    printf("Z2 = %d + %di\n",z2.preal,z2.pimag);
    //SOMA
    printaSoma(z1.preal,z1.pimag,z2.preal,z2.pimag);
}
