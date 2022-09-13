#include<stdio.h>

// LISTA DUPLAMENTE ENCADEADA (prox e ant)
struct No{
    int dado;
    struct No *prox,*ant;
} *ini=NULL, *fim=NULL;

int menu();

int inserir(int num);
int imprimir();
int alterar(int alvo);

struct No *buscar(int n);



int main(){
    int op,elemento;
    printf("CONTROLE DE LISTA SIMPLESMENTE ENCADEADA");
    op=menu();
    while (op!=0){
        switch (op) {

            case 1:
                printf("Digite o elemento que voce deseja inserir no final da lista:");
                scanf("%d",&elemento);
                inserir(elemento);
                break;

                case 2: imprimir(); break;
                    case 3:
                        printf("Insira o valor do elemento que vc deseja alterar");
                        scanf("%d",&elemento);
                        alterar(elemento);
                        break;

        }
        op=menu();
    }

}

int menu(){
    int op;
    printf("\n\nEscolha: \n1-Inserir Elemento\n2-Imprimir\n3-Alterar\n0pcao:");
    scanf("%d",&op);
    return op;
}

int inserir(int num){
    struct No *novo;
    novo = new struct No;
    novo->dado = num;
    novo->prox = NULL;

    // É o primeiro?
    if(ini==NULL){
        ini = novo;
        novo->ant = NULL;
        fim = novo;
    }
    else{
        fim->prox = novo;
        novo->ant = fim;
        fim = novo;


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
    int novovalor;
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




struct No *buscar(int n){
    struct No *b1 = ini;
    struct No *b2 = fim;
    while (b2->ant != b1->prox and b2->prox!= b1){
        if(b1->dado==n){
            return b1;
        }else if(b2->dado==n)
            return b2;

        b1=b1->prox;
        b2=b2->ant;
    }
}

