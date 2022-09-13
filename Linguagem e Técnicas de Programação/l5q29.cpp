//QUESTAO 29. Leia uma cadeia de caracteres no formato “DD/MM/AAAA” e copie o dia, mes e ano para 3 variáveis inteiras. Antes disso, verifique se as barras estão no lugar certo, e se DD, MM e AAAA são numéricos.
#include <stdio.h>;
#include <string.h>;
int main(){
 char str[11];
 int dia, mes, ano;
 printf("insira uma data (DD/MM/AAAA):");
 gets(str);
 if ((str[2] == '/') and (str[5] == '/') ){
 dia = ((str[0]-48)*10) + ((str[1]-48)) ;
 mes = ((str[3]-48)*10) + ((str[4]-48)) ;
 ano = (((str[6]-48)*1000) +((str[7]-48)*100)+((str[8]-48)*10)+((str[9]-48)));
 if ((mes>12) or (dia>31)){
 printf("dia ou mes invalidos!");
 } else {
 printf("dia: %d \nmes: %d \nano: %d",dia,mes,ano);
 }
 } else {
 printf("erro! formato invalido!");
 }
}
