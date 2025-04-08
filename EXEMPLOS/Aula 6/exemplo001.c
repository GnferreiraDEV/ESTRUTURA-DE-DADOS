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

int main(){
    Lista *X = criarLista(15);

    if (X != NULL){ // Mostra o endereço de memória da lista;

        printf("A lista foi criada!\n");
        printf("%x\n", X);
    }

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

        if(Posicao < 0 || Posicao >= L->tamanho){
            printf("Erro a posicao eh invalida!\n");
            return;
        }

        int i;
        for(i = L->tamanho - 1; i >=Posicao; i--) L->Array[i + 1] = L->Array[i];
        L->Array[Posicao] = I;

        L->tamanho++;
    }





