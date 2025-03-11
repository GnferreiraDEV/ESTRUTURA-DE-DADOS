#include <stdio.h>
#include <stdlib.h>

    int encontrar_posicao(int *vetor, int tamanho, int elemento) { // Usando int *vetor

    for (int i = 0; i < tamanho; i++)

    if (vetor[i] == elemento)

    return i;
    return -1;

}

int main() {

int numeros[] = {14, 29, 37, 11, 43, 25, 19, 32, 16, 22,

40, 13, 28, 35, 10, 45, 20, 38, 17, 24,
30, 41, 15, 27, 33, 18, 26, 39, 12, 21};

int tamanho = sizeof(numeros) / sizeof(numeros[0]);

int elemento = 35;

int posicao = encontrar_posicao(numeros, tamanho, elemento);

if (posicao != -1) printf("Elemento %d encontrado na posição: %d\n", elemento, posicao);

else printf("Elemento %d não encontrado no vetor.\n", elemento);

return 0;

}
