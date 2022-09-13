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

void excluirtudo();
void excluir(int ret);


int main(){
    int op,elemento;
    printf("CONTROLE DE LISTA DUPLAMENTE ENCADEADA");
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
            case 4:
                printf("Insira o valor do elemento que vc deseja excluir");
                scanf("%d",&elemento);
                excluir(elemento);
                break;
            case 5:
                excluirtudo();
                break;
            default:
                printf("codigo invalido! insira novamente!");




        }
        op=menu();
    }
}

int menu(){
    int op;
    printf("\n\nEscolha: \n1-Inserir Elemento\n2-Imprimir\n3-Alterar\n4-Excluir um elemento\n5-Excluir tudo\n0pcao:");
    scanf(" %d",&op);
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
    printf("LISTA:\n");
    if (aux!=NULL){
        while(aux!=NULL){
            printf("| %d | ",aux->dado);
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
        printf("\nDigite qual sera o novo valor:");
        scanf("%d",&novovalor);
        aux->dado = novovalor;
        printf("\nValor alterado!");
    } else {
        printf("valor nao encontrado!");
    }

}



struct No *buscar(int n){
  struct No *b1 = ini;
  struct No *b2 = fim;
  while (b2->ant != b1->prox or b2->prox!= b1){
      if(b1->dado==n) {

          return b1;

      }else if(b2->dado==n){

          return b2;

      }

      b1=b1->prox;
      b2=b2->ant;
  }
  return NULL;


}


void excluir(int ret){
    struct No *aux;
    aux = new struct No;
    aux=buscar(ret);
    if(aux!=NULL){
        if(aux->ant == NULL and aux->prox == NULL){
            excluirtudo();
        }
        else if(aux->ant == NULL){             // se o elemento a ser excluido for o primeiro
            printf("deletando primeiro elemento");
            ini->prox->ant = NULL;// Inicio aponta para o elemento seguinte  (lista "pula" aux)
            ini= ini->prox;
            delete(aux);                // e exclui o elemento

        } else if (aux->prox == NULL){     // se o elemento a ser excluido for o ultimo
            printf("deletando ultimo elemento");
            printf("%d",fim->dado);
            fim->ant->prox = NULL;   // fim aponta para o elemento Anterior  (lista "pula" aux)
            fim = fim->ant;
            delete(aux);            // e exclui o elemento

        } else {                         // se o elemento a ser excluido for qualquer outro
            printf("deletando elemento...");
            aux->ant->prox = aux->prox;  // o elemento anterior aponta para o proximo
            aux->prox->ant = aux->ant;  // o elemento seguinte aponta para o anterior
            delete(aux);                // e exclui o elemento

        }
        printf("\nValor %d excluido!",ret);
    } else {
    printf("valor nao encontrado!");
    }

}


void excluirtudo(){
    struct No * aux = ini;
    if (aux!=NULL) {
        printf("Excluindo todos os elementos...\n");
        struct No *b1 = ini;
        struct No *b2 = fim;
        while (b2->ant != b1->prox and b2->prox!= b1){
            ini = b1->prox;
            fim = b2->ant;
            delete(b1);
            delete(b2);
            b1=ini;
            b2=fim;
        }

        ini=NULL;
        fim=NULL;
        if(b1->prox==b2)
            delete(b2);
        delete(b1);
    }
    imprimir(); // APENAS PARA MOSTRAR QUE A LISTA ESTÁ VAZIA


}
