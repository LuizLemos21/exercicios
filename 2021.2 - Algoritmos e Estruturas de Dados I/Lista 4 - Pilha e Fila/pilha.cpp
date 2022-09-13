// LUIZ FERNANDO SILVA LEMOS
#include<stdio.h>

// PILHA
// Utilizando L.D.E pela necessidade de obter o primeiro e o ultimo elemento da pilha para realizar o controle
struct No{
    int dado;
    struct No *prox,*ant;
} *ini=NULL, *fim=NULL;

int menu();
int empilhar(int num);
int imprimir();
void zerapilha();
void desempilhar();


int main(){
    int op,elemento;
    printf("CONTROLE DE PILHA");
    op=menu();
    while (op!=0){
        switch (op) {
            case 1:
                printf("Digite o elemento que voce deseja empilhar:");
                scanf("%d",&elemento);
                empilhar(elemento);
                break;
            case 2: desempilhar(); break;
            case 3:  zerapilha(); break;
            default:
                printf("codigo invalido! insira novamente!");
        }
        op=menu();
    }
}

int menu(){
    int op;
    printf("\n\nEscolha: \n1-Empilhar\n2-Desempilhar\n3-Zerar Pilha\n0pcao:");
    scanf(" %d",&op);
    return op;
}

int empilhar(int num){
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
    imprimir();

}

int imprimir(){
    struct No * aux = fim;   // imprime do fim para mostrar a pilha em pé
    printf("PILHA:\n");
    if (aux!=NULL){
        while(aux!=NULL){
            printf("| %d | \n",aux->dado);
            aux=aux->ant;
        }
    } else
        printf("PILHA VAZIA!");
}





void desempilhar(){
    struct No *aux;
    aux = new struct No;
    aux=fim;
    if(aux){
        if(aux->ant == NULL and aux->prox == NULL){ // se for o único elemento
            ini=NULL;
            fim=NULL;
            delete(aux);
        } else{
            fim->ant->prox = NULL;
            fim= fim->ant;
            delete(aux);
        }
    }
    imprimir();
}


void zerapilha(){
    struct No * aux = ini;
    if (aux!=NULL) {
        printf("Excluindo todos os elementos...\n");
        struct No *a1 = ini;
        struct No *a2 = fim;
        while (a2->ant != a1->prox and a2->prox!= a1){
            ini = a1->prox;
            fim = a2->ant;
            delete(a1);
            delete(a2);
            a1=ini;
            a2=fim;
        }

        ini=NULL;
        fim=NULL;
        if(a1->prox==a2)
            delete(a2);
        delete(a1);
    }
    imprimir();
}

