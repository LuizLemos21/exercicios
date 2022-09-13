/* TRABALHO - ALGORITMOS E ESTRUTURAS DE DADOS
 * CATALOGO TAXONÔMICO DE ESPÉCIES
 * LUIZ FERNANDO SILVA LEMOS E PEDRO PEDRO HENRIQUE DA COSTA LYRIO
 */

#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
int pos = 0;
struct No{
    char dominio[99];
    char reino[99];
    char filo[99];
    char classe[99];
    char ordem[99];
    char familia[99];
    char genero[99];
    char especie[99];
    int pos=0;
    struct No *prox;
} *fim=NULL;

FILE *fp;

int menu();

int inserir_fim(int pos);
int imprimir();
int alterar();
void excluirtudo();
struct No *buscar(int n);
void excluir();
void criaarquivo();
void salvaarquivo();
void reorganizaLista();
void pesquisar();

int main(){

    int op;
    char elemento[99];
    printf("CATALOGO\n");
   criaarquivo();
   imprimir();
    op=menu();
    while (op!=0){
        switch (op) {
            case 1:
                pos++;
                inserir_fim(pos); break;
            case 2:
                imprimir(); break;
            case 3:
                pesquisar();
                break;

            case 4:
                alterar();
                break;

            case 5:
                excluir();
                reorganizaLista();
                break;

            case 6:
                printf("Excluindo todos os elementos...\n");
                excluirtudo();
                imprimir(); // APENAS PARA MOSTRAR QUE A LISTA ESTÁ VAZIA
                break;

            default:
                printf("Opção invalida! Tente novamente");
                getchar();
                break;

        }
        op=menu();
    }
    salvaarquivo();
}


int menu(){
    int op;
    printf("\n\nEscolha: \n1-Inserir\n2-Imprimir\n3-Pesquisar\n4-Alterar\n5-Excluir um elemento\n6-Excluir tudo\n0-Encerrar e Salvar\n0pcao:");
    scanf("%d",&op);
    return op;
}

int inserir_fim(int pos){

    struct No *novo = new struct No;

    printf("Digite o Dominio:");
    getchar();
    gets(novo->dominio);

    printf("Digite o Reino:");
    gets(novo->reino);

    printf("Digite o Filo:");
    gets(novo->filo);

    printf("Digite o Classe:");
    gets(novo->classe);

    printf("Digite a Ordem:");
    gets(novo->ordem);

    printf("Digite a Familia:");
    gets(novo->familia);

    printf("Digite o Genero:");
    gets(novo->genero);


    printf("Digite a Especie:");
    gets(novo->especie);


    novo->pos=pos;
    novo->prox = NULL;


    // É o primeiro?
    if(fim == NULL){
        fim = novo;
        novo->prox = fim;
    }
    else{
        novo->prox = fim->prox;
        fim->prox = novo;
        fim=novo;
    }
    return 0;
}

int imprimir(){

        struct No * aux = fim;
        if (aux){
            aux=aux->prox;
            do{
                printf("\nCRIATURA %d\n",aux->pos);
                printf("Dominio: %s\n",aux->dominio);
                printf("Reino: %s\n",aux->reino);
                printf("Filo: %s\n",aux->filo);
                printf("Classe: %s\n",aux->classe);
                printf("Ordem: %s\n",aux->ordem);
                printf("Familia: %s\n",aux->familia);
                printf("Genero: %s\n",aux->genero);
                printf("Especie: %s\n",aux->especie);
                printf("---------------\n");
                aux=aux->prox;
            }while(aux!=fim->prox);

        } else
            printf("LISTA VAZIA!");

        return 0;
    }


    void salvaarquivo(){
    struct No * aux = fim;
    int res;
    fp=fopen("catalog.txt","w");
    if(fp==NULL){
        printf("Erro na abertura do arquivo!");
        system("pause");
        exit(1);
    }

    if (aux){
        aux=aux->prox;
        do{
            //fprintf(fp,"\n%d\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",aux->pos,aux->dominio,aux->reino,aux->filo,aux->classe,aux->ordem,aux->familia,aux->genero,aux->especie);
            fprintf(fp,"%d %s \n",1,aux->dominio);
            fprintf(fp,"%d %s \n",2,aux->reino);
            fprintf(fp,"%d %s \n",3,aux->filo);
            fprintf(fp,"%d %s \n",4,aux->classe);
            fprintf(fp,"%d %s \n",5,aux->ordem);
            fprintf(fp,"%d %s \n",6,aux->familia);
            fprintf(fp,"%d %s \n",7,aux->genero);
            fprintf(fp,"%d %s \n",8,aux->especie);
            aux=aux->prox;
        }while(aux!=fim->prox);


    }
    printf("Dados gravados com sucesso!");
    fclose(fp);


}

void criaarquivo(){
    int i = 0;
    struct No *novo;
    char aux[99];
    fp=fopen("catalog.txt","r");
    if(fp){
        printf("Arquivo aberto com sucesso!\n");

        while (fscanf(fp,"%d %s",&i,aux)!=-1){
        switch (i) {
            case 1:
                novo = new struct No;
                strcpy(novo->dominio,aux);
                break;
            case 2:
                strcpy(novo->reino,aux);
                break;
            case 3:
                strcpy(novo->filo,aux);
                break;
            case 4:
                strcpy(novo->classe,aux);
                break;
            case 5:
                strcpy(novo->ordem,aux);
                break;
            case 6:
                strcpy(novo->familia,aux);
                break;
            case 7:
                strcpy(novo->genero,aux);
                break;
            case 8:
                strcpy(novo->especie,aux);
                pos++;
                novo->pos=pos;
                novo->prox = NULL;
                if(fim == NULL){
                    fim = novo;
                    novo->prox = fim;
                }
                else{
                    novo->prox = fim->prox;
                    fim->prox = novo;
                    fim=novo;
                }
                break;
            }

        }


    } else{
        printf("Erro na abertura do Arquivo!");
    }
    //
    fclose(fp);

}




void excluirtudo(){
    struct No *aux = fim->prox;
    struct No *aux2 = new struct No;
    while(aux!=fim){
        aux2=aux->prox;
        printf("CRIATURA %d deletada!\n",aux->pos);
        delete(aux);
        aux=aux2;
    }
    fim=NULL;
    printf("CRIATURA %d deletada!\n",aux->pos);
    delete(aux);

}

struct No *buscar(int n){
    struct No *aux = fim;
    if(fim==NULL){
        imprimir();
        return NULL;
    } else{
        do {
            if (aux->pos==n){
                return aux;
            } else{
                aux=aux->prox;
            }
        }while(aux!=fim);
        printf("O Valor informado nao foi encontrado!");
        return NULL;
    }


}

void excluir(){
    int n;
    struct No *aux,*ant;
    printf("Insira numero da criatura que vc deseja excluir");
    scanf("%d",&n);
    aux = buscar(n);
    if(aux){
        ant = fim->prox;
        while(ant->prox!=aux){
            ant=ant->prox;
        }
        ant->prox = aux->prox;
        if(fim==fim->prox){
            excluirtudo();
        } else{
            if(aux==fim)
                fim=ant;
            printf("CRIATURA %d eliminada com sucesso!",aux->pos);
            delete aux;

        }
    }

}

int alterar(){
    int n, op;
    struct No * aux = new struct No;
    printf("Insira numero da criatura que vc deseja alterar");
    scanf("%d",&n);
    aux = buscar(n);
    if(aux!=NULL){
        do{
            printf("\nDigite qual elemento vc deseja alterar:");
            printf("\n1.Dominio\n2.Reino\n3.Filo\n4.Classe\n5.Ordem\n6.Familia\n7.Genero\n8.Especie\n0.Sair");
            scanf("%d",&op);
            switch (op){
                case 1:
                    printf("\nDigite o Dominio:");
                    getchar();
                    gets(aux->dominio);
                    printf("elemento alterado!");
                    break;
                case 2:
                    printf("Digite o Reino:");
                    getchar();
                    gets(aux->reino);
                    printf("elemento alterado!");
                    break;
                case 3:
                    printf("Digite o Filo:");
                    getchar();
                    gets(aux->filo);
                    printf("elemento alterado!");
                    break;
                case 4:
                    printf("Digite o Classe:");
                    getchar();
                    gets(aux->classe);
                    printf("elemento alterado!");
                    break;
                case 5:
                    printf("Digite a Ordem:");
                    getchar();
                    gets(aux->ordem);
                    printf("elemento alterado!");
                    break;

                case 6:
                    printf("Digite a Familia:");
                    getchar();
                    gets(aux->familia);
                    printf("elemento alterado!");
                    break;

                case 7:
                    printf("Digite o Genero:");
                    getchar();
                    gets(aux->genero);
                    printf("elemento alterado!");
                    break;
                case 8:
                    printf("Digite a Especie:");
                    getchar();
                    gets(aux->especie);
                    printf("elemento alterado!");
                    break;
                default:
                    if (op!=0)
                        printf("Operador invalido! Tente novamente!");

            }

        }while (op!=0);

    }
    return 0;
}
// Vai reorganizar as posições das CRIATURAS sempre que um elemento for deletado.

void reorganizaLista (){
        int tam = 1;
        struct No * aux = fim;
        if (aux){
            aux=aux->prox;
            do{
                aux->pos = tam;
                aux=aux->prox;
                tam++;
            }while(aux!=fim->prox);

        } else
            printf("LISTA VAZIA!");


}


void pesquisar(){
    struct No * aux = fim;
    int op; char pesquisa[99];
    if (aux){
        do{
            printf("\nPesquisar por:");
            printf("\n1.Dominio\n2.Reino\n3.Filo\n4.Classe\n5.Ordem\n6.Familia\n7.Genero\n8.Especie\n0.Sair");
            scanf("%d",&op);
            switch (op){
                case 1:
                    aux = fim;
                        printf("\nDigite o Dominio:");
                        getchar();
                        gets(pesquisa);

                        aux=aux->prox;
                        do{
                            if(strcmp(aux->dominio,pesquisa)==0){
                                printf("\nCRIATURA %d\n",aux->pos);
                                printf("Dominio: %s\n",aux->dominio);
                                printf("Reino: %s\n",aux->reino);
                                printf("Filo: %s\n",aux->filo);
                                printf("Classe: %s\n",aux->classe);
                                printf("Ordem: %s\n",aux->ordem);
                                printf("Familia: %s\n",aux->familia);
                                printf("Genero: %s\n",aux->genero);
                                printf("Especie: %s\n",aux->especie);
                                printf("---------------\n");
                            }
                            aux=aux->prox;
                        }while(aux!=fim->prox);

                    break;
                    case 2:
                        aux=fim;
                            printf("Digite o Reino:");
                            getchar();
                            gets(pesquisa);
                            aux=aux->prox;
                            do{
                                if(strcmp(aux->reino,pesquisa)==0){
                                    printf("\nCRIATURA %d\n",aux->pos);
                                    printf("Dominio: %s\n",aux->dominio);
                                    printf("Reino: %s\n",aux->reino);
                                    printf("Filo: %s\n",aux->filo);
                                    printf("Classe: %s\n",aux->classe);
                                    printf("Ordem: %s\n",aux->ordem);
                                    printf("Familia: %s\n",aux->familia);
                                    printf("Genero: %s\n",aux->genero);
                                    printf("Especie: %s\n",aux->especie);
                                    printf("---------------\n");
                                }
                                aux=aux->prox;
                            }while(aux!=fim->prox);


                        break;
                        case 3:
                            aux=fim;

                                printf("Digite o Filo:");
                                getchar();
                                gets(pesquisa);

                                aux=aux->prox;
                                do{
                                    if(strcmp(aux->filo,pesquisa)==0){
                                        printf("\nCRIATURA %d\n",aux->pos);
                                        printf("Dominio: %s\n",aux->dominio);
                                        printf("Reino: %s\n",aux->reino);
                                        printf("Filo: %s\n",aux->filo);
                                        printf("Classe: %s\n",aux->classe);
                                        printf("Ordem: %s\n",aux->ordem);
                                        printf("Familia: %s\n",aux->familia);
                                        printf("Genero: %s\n",aux->genero);
                                        printf("Especie: %s\n",aux->especie);
                                        printf("---------------\n");
                                    }
                                    aux=aux->prox;

                                }while(aux!=fim->prox);


                            break;
                            case 4:
                                aux=fim;
                                    printf("Digite o Classe:");
                                    getchar();
                                    gets(pesquisa);
                                    aux=aux->prox;
                                    do{
                                        if(strcmp(aux->classe,pesquisa)==0){
                                            printf("\nCRIATURA %d\n",aux->pos);
                                            printf("Dominio: %s\n",aux->dominio);
                                            printf("Reino: %s\n",aux->reino);
                                            printf("Filo: %s\n",aux->filo);
                                            printf("Classe: %s\n",aux->classe);
                                            printf("Ordem: %s\n",aux->ordem);
                                            printf("Familia: %s\n",aux->familia);
                                            printf("Genero: %s\n",aux->genero);
                                            printf("Especie: %s\n",aux->especie);
                                            printf("---------------\n");
                                        }
                                        aux=aux->prox;
                                    }while(aux!=fim->prox);


                                break;
                                case 5:
                                    aux=fim;

                                        printf("Digite a Ordem:");
                                        getchar();
                                        gets(pesquisa);
                                        aux=aux->prox;
                                        do{
                                            if(strcmp(aux->ordem,pesquisa)==0){
                                                printf("\nCRIATURA %d\n",aux->pos);
                                                printf("Dominio: %s\n",aux->dominio);
                                                printf("Reino: %s\n",aux->reino);
                                                printf("Filo: %s\n",aux->filo);
                                                printf("Classe: %s\n",aux->classe);
                                                printf("Ordem: %s\n",aux->ordem);
                                                printf("Familia: %s\n",aux->familia);
                                                printf("Genero: %s\n",aux->genero);
                                                printf("Especie: %s\n",aux->especie);
                                                printf("---------------\n");
                                            }
                                            aux=aux->prox;
                                        }while(aux!=fim->prox);


                                    break;

                                    case 6:
                                        aux=fim;

                                            printf("Digite a Familia:");
                                            getchar();
                                            gets(pesquisa);
                                            aux=aux->prox;
                                            do{
                                                if(strcmp(aux->familia,pesquisa)==0){
                                                    printf("\nCRIATURA %d\n",aux->pos);
                                                    printf("Dominio: %s\n",aux->dominio);
                                                    printf("Reino: %s\n",aux->reino);
                                                    printf("Filo: %s\n",aux->filo);
                                                    printf("Classe: %s\n",aux->classe);
                                                    printf("Ordem: %s\n",aux->ordem);
                                                    printf("Familia: %s\n",aux->familia);
                                                    printf("Genero: %s\n",aux->genero);
                                                    printf("Especie: %s\n",aux->especie);
                                                    printf("---------------\n");
                                                }
                                                aux=aux->prox;

                                            }while(aux!=fim->prox);


                                        break;

                                        case 7:
                                            aux=fim;

                                                printf("Digite o Genero:");
                                                getchar();
                                                gets(pesquisa);
                                                aux=aux->prox;
                                                do{
                                                    if(strcmp(aux->genero,pesquisa)==0){
                                                        printf("\nCRIATURA %d\n",aux->pos);
                                                        printf("Dominio: %s\n",aux->dominio);
                                                        printf("Reino: %s\n",aux->reino);
                                                        printf("Filo: %s\n",aux->filo);
                                                        printf("Classe: %s\n",aux->classe);
                                                        printf("Ordem: %s\n",aux->ordem);
                                                        printf("Familia: %s\n",aux->familia);
                                                        printf("Genero: %s\n",aux->genero);
                                                        printf("Especie: %s\n",aux->especie);
                                                        printf("---------------\n");
                                                    }
                                                    aux=aux->prox;

                                                }while(aux!=fim->prox);


                                            break;
                                            case 8:
                                                aux=fim;

                                                    printf("Digite a Especie:");
                                                    getchar();
                                                    gets(pesquisa);
                                                    aux=aux->prox;
                                                    do{
                                                        if(strcmp(aux->especie,pesquisa)==0){
                                                            printf("\nCRIATURA %d\n",aux->pos);
                                                            printf("Dominio: %s\n",aux->dominio);
                                                            printf("Reino: %s\n",aux->reino);
                                                            printf("Filo: %s\n",aux->filo);
                                                            printf("Classe: %s\n",aux->classe);
                                                            printf("Ordem: %s\n",aux->ordem);
                                                            printf("Familia: %s\n",aux->familia);
                                                            printf("Genero: %s\n",aux->genero);
                                                            printf("Especie: %s\n",aux->especie);
                                                            printf("---------------\n");
                                                        }
                                                        aux=aux->prox;

                                                    }while(aux!=fim->prox);

                                                break;
                                                default:
                                                    if (op!=0)
                                                        printf("Operador invalido! Tente novamente!");

            }

        }while (op!=0);
    } else{
        printf("LISTA VAZIA!");
    }

}

