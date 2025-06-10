#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int N = 100000; // Tamanho do vetor a ser criado
    int i;
    int *V = (int *)malloc(N * sizeof(int));

    clock_t t0, tf;
    double TempoCPU;

    srand(time(NULL));

    t0 = clock();
    for(i = 0; i < N; i++) V[i] = rand();
    for(i = 0; i < N; i++) printf("%d\t", V[i]);
    tf = clock();

    TempoCPU = ((double)(tf - t0)) / CLOCKS_PER_SEC;
    printf("\n\nTempo de execução: %.3lf segundos.", TempoCPU);
    
    return 0;
}
