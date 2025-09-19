#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0;
    printf("insira uma string:");
    gets(str);
    printf("string sem vogais:\n");
    while (str[i]!= '\0'){
        switch (str[i]) {
                case'a':
                case'e':
                case'i':
                case'o':
                case'u':
                case'A':
                case'E':
                case'I':
                case'O':
                case'U':
                    break;
               default:
                printf("%c",str[i]);

        }
        i++;
    }
}
