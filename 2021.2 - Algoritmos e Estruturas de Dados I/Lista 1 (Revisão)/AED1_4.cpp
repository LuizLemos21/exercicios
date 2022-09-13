#include <stdio.h>
#include <string.h>
// criação da estrutura Livro
struct Livro{
    int isbn;
    char titulo[99];
    char autor[99];
    int num_pags;
    float preco;
    int ano_pub;
};
int main() {
    struct Livro livro1;  // cria variavel livro1 como struct Livro

    // atribuindo valores para os campos da estrutura
    livro1.isbn=1;
    strcpy(livro1.titulo,"Senhor dos Aneis: Retorno do Rei");
    strcpy(livro1.autor,"J.R.R Tolkien");
    livro1.num_pags=416;
    livro1.preco=199.99;
    livro1.ano_pub = 1955;

    // imprimindo os valores dos campos
    printf("Livro: %s\n",livro1.titulo);
    printf("ISBN: %d\n",livro1.isbn);
    printf("Autor: %s \n",livro1.autor);
    printf("Preco: R$ %.2f\n",livro1.preco);
    printf("Numero de Paginas: %d\n",livro1.num_pags);
    printf("Ano de Publicacao: %d\n",livro1.ano_pub);

}
