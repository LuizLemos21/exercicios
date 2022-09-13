#include <stdio.h>

int main() {
    int a,b,i=0,veta[5]={0,0,0,0,0},vetb[5]={0,0,0,0,0},vetc[5]={0,0,0,0,0},controle=0;

    //INICIALIZACAO DE VALORES
    printf("digite 2 numeros positivos menores que 10000:");
    printf("\ndigite um numero a:");
    scanf("%d",&a);
    printf("\ndigite um numero b:");
    scanf("%d",&b);

    // TESTE DE ENTRADA
    if((a>9999) or (a<0) or (b>9999) or (b<0)){
        printf("Entrada Invalida!");
    } else{
        //PREENCHIMENTO DOS VETORES
        while ((a/10)>0){
            veta[i] = (a%10);
            a/= 10;
            i++;
        }
        veta[i] = a;

        i=0;

        while ((b/10)>0){
            vetb[i] = (b%10);
            b/= 10;

            i++;
        }
        vetb[i] = b;



        for(i=0;i<=5;i++){
            vetc[i] = veta[i]+vetb[i];
        }

        for(i=0;i<5;i++){
            if(vetc[i]>=10){
                vetc[i]-=10;
                vetc[i+1]+=1;
            }
        }
        // IMPRESSÃO DA OPERAÇÃO:
        printf("OPERACAO:\n");
        printf("\t");
        for(i=0;i<5;i++)
            printf(" %d ",veta[4-i]);
        printf("\n+\t");
        for(i=0;i<5;i++)
            printf(" %d ",vetb[4-i]);
        printf("\n\n\t");
        for(i=0;i<5;i++)
            printf(" %d ",vetc[4-i]);
        printf("\n\nRESULTADO:");
        for(i=0;i<5;i++)
                printf("%d",vetc[4-i]);

    }



}
