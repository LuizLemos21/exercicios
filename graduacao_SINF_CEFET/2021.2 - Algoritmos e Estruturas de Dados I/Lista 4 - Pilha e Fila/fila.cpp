// CONTROLE DE FILA UTILIZANDO L.S.E

// Utilizando a LSE por ser necessário utilizar apenas o ini
#include<stdio.h>


struct No{
    int dado;
    struct No *prox;
} *ini=NULL; // Inicialização da Pilha

int menu();
int enfileira(int num);
int imprimir();
void zerafila();
void desinfileira();


int main(){
    int op,elemento;
    printf("CONTROLE DE UMA FILA:");
    op=menu();
    while (op!=0){
        switch (op) {

            case 1:
                printf("Digite o elemento que voce deseja enfileirar:");
                scanf("%d",&elemento);
                enfileira(elemento);
                break;
            case 2:
                desinfileira();
                break;
            case 3:
                printf("Zerando a fila...\n");
                zerafila();
                break;
            default:
                printf("Comando inválido!");
        }
        op=menu();
    }

}

int menu(){
    int op;
    printf("\n\nEscolha: \n1-Colocar um elemento na Fila\n2-Desinfileirar: \n3-Zera fila\n0pcao:");
    scanf("%d",&op);
    return op;
}

int enfileira(int num){
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
    imprimir();

}

int imprimir(){
    struct No * aux = ini;
    if (aux!=NULL){  // Testa se a FILA está vazia
        while(aux!=NULL){
            printf("| %d |",aux->dado);
            aux=aux->prox;
        }
    } else
        printf("FILA VAZIA!");
}



void desinfileira(){
    struct No *aux;
    aux = ini;
    if (aux!=NULL){
        // exclui o primeiro elemento da fila
        ini=aux->prox;
        delete(aux);
    }
    imprimir();

}


void zerafila(){
    struct No *aux = ini;
    while (ini!=NULL){      // simplesmente percorre a fila deletando um elemento a cada iteração
        ini=aux->prox;
        delete(aux);
        aux=ini;
    }
    imprimir();

}



