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

int main();

    Lista * criarLista(int N){

        Lista * L = (Lista *)malloc( sizeof (Lista));

    }




