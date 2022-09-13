
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
void excluirtudo();
struct No *buscar(int n);
void excluir(int ret);


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
               printf("Insira o valor do elemento que vc deseja alterar");
               scanf("%d",&elemento);
               alterar(elemento);
               break;
            case 5:
                printf("Insira o valor do elemento que vc deseja excluir");
                scanf("%d",&elemento);
                excluir(elemento);
                break;
            case 6:
                printf("Excluindo todos os elementos...\n");
                excluirtudo();
                imprimir(); // APENAS PARA MOSTRAR QUE A LISTA ESTÁ VAZIA
                break;
        }
        op=menu();
    }

}

int menu(){
    int op;
    printf("\n\nEscolha: \n1-Inserir no Inicio\n2-Inserir no final\n3-Imprimir\n4-Alterar\n5-Excluir um elemento\n6-Excluir tudo\n0pcao:");
    scanf("%d",&op);
    return op;
}

int inserir_fim(int num){
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
    aux = buscar(alvo);
    if(aux!=NULL){
        printf("Digite qual sera o novo valor:");
        scanf("%d",&novovalor);
        aux->dado = novovalor;
    }else{
        printf("O Valor informado nao foi encontrado!");
    }

}


int inserir_ini(int num){
    struct No *novo;
    novo = new struct No;
    novo->dado = num;
    novo->prox = ini;
    ini=novo;
}

struct No *buscar(int n){
    struct No *aux = ini;
    if(aux!=NULL){          // percorre a lista ate algum elemento ser igual ao fornecido
        while(aux!=NULL){
            if(aux->dado == n)
                return aux;    // retorna esse elemento
            aux=aux->prox;
        }
    } else{                     // se nao houver elementos na lista
        printf("LISTA VAZIA");
        return NULL;
    }
}

void excluir(int ret){
    struct No *aux;
    aux = new struct No;

    struct No *sombra = ini;
    aux=buscar(ret);

        if(aux==ini){             // se o elemento a ser excluido for o primeiro
            ini=aux->prox;         // Inicio aponta para o elemento seguinte  (lista "pula" aux)
            delete(aux);           // e exclui o elemento
        } else {
            if(aux!=NULL){
                while (sombra->prox!=aux){    // leva sombra até o elemento escolhido
                    sombra = sombra->prox;
                }
                sombra->prox =aux->prox;      // sombra aponta para o seguinte (lista "pula" aux)
                delete(aux);                    // aux é apagado
            } else{
                printf("O Valor informado nao foi encontrado!");
            }
        }

}


void excluirtudo(){
    struct No *aux = ini;
    while (ini!=NULL){      // simplesmente percorre a lista deletando um elemento a cada iteração
        ini=aux->prox;
        delete(aux);
        aux=ini;
    }

}

