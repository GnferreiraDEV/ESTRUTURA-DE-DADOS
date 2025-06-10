#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int N = 10000000; // Tamanho do vetor a ser criado
    int i;
    int *V = (int *)malloc(N * sizeof(int));

    srand(time(NULL));

    for(i = 0; i < N; i++) V[i] = rand();
    for(i = 0; i < N; i++) printf("%d\t", V[i]);
    
    return 0;
}
