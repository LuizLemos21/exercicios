#include <iostream>

int main() {
    FILE *fp;
    int mannum,lavnum;
    float comblevel, valorcomb, valorman, valorlav, medcons, custopkm;

    printf("Digite o numero de manutencoes do carro:");
    scanf("%d",&mannum);
    printf("Digite os gastos com as manutencoes(em reais):");
    scanf("%f",&valorman);
    printf("Digite o nivel de combustivel (em Litros):");
    scanf("%f",&comblevel);
    printf("Digite os gastos com combustivel(em reais):");
    scanf("%f",&valorcomb);
    printf("Digite o numero de lavagens do carro:");
    scanf("%d",&lavnum);
    printf("Digite os gastos com as lavagens:(em reais)");
    scanf("%f",&valorlav);
    printf("Digite o custo por quilometro (em reais):");
    scanf("%f",&custopkm);
    printf("Digite o consumo medio(km/l):");
    scanf("%f",&medcons);

    fp = fopen("l11q12.txt","w");
    if (fp == NULL){
        printf("Erro na abertura do arquivo!");
        system("pause");
        exit(1);
    }
    printf("Arquivo criado com sucesso!");
    fprintf(fp,"RELATORIO DO CARRO\n");
    fprintf(fp,"Numero de manutencoes: %d\n",mannum);
    fprintf(fp,"Gastos com manutencoes: R$%.2f\n",valorman);
    fprintf(fp,"Nivel de Combustivel %.2f L\n",comblevel);
    fprintf(fp,"Gastos com combustível: R$%.2f\n",valorcomb);
    fprintf(fp,"Numero de lavagens: %d\n",lavnum);
    fprintf(fp,"Gastos com lavagens: R$%.2f\n",valorlav);
    fprintf(fp,"Custo por quilometro: R$%.2f\n",custopkm);
    fprintf(fp,"Consumo medio: %.2fkm/l\n",medcons);


}
