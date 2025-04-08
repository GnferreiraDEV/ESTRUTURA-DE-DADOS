#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int Chave;
} Item;

typedef struct{
    Item *Array;
    int tamanho;
    int capacidade;
} Lista;

//Protótipos

Lista * criarLista(int N);
void destruirLista(Lista * L);
void inserirElemento(Lista *L, Item I, int Posicao);
void imprimirLista(Lista *L);

int main(){
    Lista *X = criarLista(15);

    if (X != NULL){ // Mostra o endereço de memória da lista;

        printf("A lista foi criada!\n");
        printf("%x\n", X);
    }

    Item E1 = {10};
    inserirElemento(X, E1, 0);
    Item E2 = {15};
    inserirElemento(X, E2, 1);
    Item E3 = {20};
    inserirElemento(X, E3, 2);
    Item E4 = {25};
    inserirElemento(X, E4, 3);
    Item E5 = {30};
    inserirElemento(X, E5, 4);
    Item E6 = {35};
    inserirElemento(X, E6, 5);
    Item E7 = {40};
    inserirElemento(X, E7, 6);

    imprimirLista(X);

    destruirLista(X);

    return 0;
}

    Lista * criarLista(int N){

        Lista * L = (Lista *)malloc( sizeof (Lista));
        
        if (L == NULL){

            printf("Erro ao alocar memoria na lista!\n");
            return NULL;
            
        }

        L->Array = (Item *)malloc( N * sizeof(Item));

        if (L->Array == NULL){

            printf("Erro ao alocar memoria no vetor!\n");
            free(L);
            return NULL;

        }

        L->tamanho = 0;
        L->capacidade = N;

        return L;
        
          
        


    }

    void destruirLista(Lista * L){
        free(L->Array);
        free(L);
    }

    void inserirElemento(Lista *L, Item I, int Posicao){
        if(L->tamanho == L->capacidade){
            printf("ERRO: Lista estah cheia e nao pode receber mais elementos!\n");
            return;
        }

        if(Posicao == 0)L->Array[Posicao] = I;

     else if(Posicao >= 0 && Posicao <= L->tamanho){

    int i;
    for(i = L->tamanho - 1; i >=Posicao; i--) L->Array[i + 1] = L->Array[i];
    L->Array[Posicao] = I;

        }else{
            printf("Erro a posicao eh invalida!\n");
            return;
        }

        L->tamanho++;

    }

    void imprimirLista(Lista *L){
        int i;
        for (i = 0; i < L->tamanho; i++) printf("%d\n", L->Array[i].Chave);
        printf("\n");
    }


    





