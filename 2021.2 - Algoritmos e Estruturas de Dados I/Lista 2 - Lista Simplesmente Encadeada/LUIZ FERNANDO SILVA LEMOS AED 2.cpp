#include<stdio.h>
#include <cstdlib>

struct No{
    int dado;
    struct No *prox;
} *ini=NULL;

int menu();
int inserir_ini(int num);
int inserir_fim(int num);
int imprimir();
int alterar(int alvo);


int main(){
    int op,elemento;
    printf("CONTROLE DE LISTA SIMPLESMENTE ENCADEADA");
    op=menu();
    while (op!=0){
        switch (op) {

            case 1:
                printf("Digite o elemento que voce deseja inserir no inicio da lista:");
                scanf("%d",&elemento);
                inserir_ini(elemento);
                break;


            case 2:
                printf("Digite o elemento que voce deseja inserir no final da lista:");
                scanf("%d",&elemento);
                inserir_fim(elemento);
                break;

           case 3: imprimir(); break;
           case 4:
               printf("Insira o valor do elemento que vc deseja alterar"); //vai substituir todas as vezes q esse valor ocorre (repeticoes)
               scanf("%d",&elemento);
               alterar(elemento);
               break;
        }
        op=menu();
    }

}

int menu(){
    int op;
    printf("\n\nEscolha: \n1-Inserir no Inicio\n2-Inserir no final\n3-Imprimir\n4-Alterar\n0pcao:");
    scanf("%d",&op);
    return op;
}

int inserir_ini(int num){
    struct No *novo;
    novo = new struct No;
    struct No * aux = ini;
    novo->dado = num;
    novo->prox = NULL;
    // É o primeiro?
    if(ini==NULL)
        ini = novo;
    else{
        aux= ini;
        while (aux->prox!=NULL){
            aux=aux->prox;

        }
        aux->prox=novo;

    }

}

int imprimir(){
    struct No * aux = ini;
    if (aux!=NULL){
        while(aux!=NULL){
            printf("+------------+\n |     %d     | \n |%p| \n +------------+\n\n",aux->dado,aux->prox);
            aux=aux->prox;
        }
    } else
        printf("LISTA VAZIA!");
}

int alterar(int alvo){
    int novovalor, contalvo=0;
    struct No * aux = ini;

    printf("Digite qual sera o novo valor:");
    scanf("%d",&novovalor);

    if (aux!=NULL){
        while(aux!=NULL){
            if(aux->dado == alvo){
                contalvo++;
                aux->dado = novovalor;
            }
            aux=aux->prox;
        }
    } else
        printf("LISTA VAZIA!");
    if (contalvo==0)
        printf("ELEMENTO NAO ENCONTRADO");
}

int inserir_fim(int num){
    struct No *novo;
    novo = new struct No;
    novo->dado = num;
    novo->prox = ini;
    ini=novo;
}



