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

int main(){
    Lista *X = criarLista(15);

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





