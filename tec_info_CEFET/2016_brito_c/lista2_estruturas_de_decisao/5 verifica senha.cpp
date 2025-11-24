//Faça um programa que peça para o usuário entrar com uma senha e diga se a senha está correta ou incorreta (a senha é definida como constante pelo programador)

#include <stdio.h>
#include <string.h>

int main(){
    #define senha "1234"

    char entry[20];
    
    printf("entre com a senha: ");
    scanf("%s", &entry);

    if (strcmp(entry,senha) == 0){
        printf("senha correta!");
    } else {
        printf("senha incorreta!");
    }


}