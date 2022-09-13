// QUESTAO 25. O código de César é uma das mais simples e conhecidas técnicas de criptografia. E um tipo de substituição na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto abaixo dela um numero fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituido por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que Faça uso desse Código de César (3 posições), entre com uma string e retorne a string codificada. Exemplo:
//• String:
//a ligeira raposa marrom saltou sobre o cachorro cansado
//• Nova string:
//D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR

#include <stdio.h>
#include <string.h>
int main(){
 char str[99];
 int i, size;
 gets(str);
 size = strlen(str);
 for(i=0; i<= size; i++){
 if (str[i] != ' '){
 str[i] += 3;
 }
 }
 printf("%s",str);
}
