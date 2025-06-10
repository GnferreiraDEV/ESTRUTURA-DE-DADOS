#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int N = 200000; // Tamanho do vetor a ser criado
    int i;
    int *V = (int *)malloc(N * sizeof(int));
    double Soma = 0;

    srand(time(NULL));

    clock_t t0 = clock();
    for(i = 0; i < N; i++) V[i] = rand() % 1000;
    for(i = 0; i < N; i++) Soma = Soma + V[i];
    clock_t tf = clock();

    double TempoCPU = ((double)(tf - t0)) / CLOCKS_PER_SEC;
    printf("\n\nTempo de execução: %.3lf segundos.", TempoCPU);
    
    return 0;
}
