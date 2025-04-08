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
