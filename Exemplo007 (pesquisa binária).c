#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

// Protótipo de função

int getPosicao(int *Vetor, int T, int Chave);

// Main

int main() {
    
    int numeros[] = {14, 29, 37, 11, 43, 25, 19, 32, 16, 22, 40, 13, 28, 35, 10, 45, 20, 38, 17, 24, 30, 41, 15, 27, 33, 18, 26, 39, 12, 21};
    int tamanho = sizeof(numeros)/sizeof(int);
    int elemento = 90;
    int posicao = getPosicao(numeros, tamanho, elemento);

    if(posicao != ERRO) printf("O elemento %d está na posição %d.\n", elemento, posicao);
    else printf("O elemento %d não está no vetor.\n", elemento); 
        
    return 0;
}

// Implementação das funções

int getPosicao(int *Vetor, int T, int Chave){
    for (int i = 0; i < T; i++)
        if (Vetor[i] == Chave)
            return i;
    return ERRO; // Código de erro: o elemento não está no vetor
}