#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int N = 200000;  
    int i;
    int *V = (int *)malloc(N * sizeof(int));
    clock_t t0, tf;
    double TempoCPU;
    int soma = 0;

    srand(time(NULL));

    t0 = clock();


    for(i = 0; i < N; i++) {
        V[i] = rand() % 1000;  
        soma += V[i];  
    }

    tf = clock();

    TempoCPU = ((double)(tf - t0)) / CLOCKS_PER_SEC;

    
    printf("Soma dos %d numeros aleatorios eh: %d\n", N, soma);
    printf("Tempo de CPU usado: %.3lf segundos\n", TempoCPU);

 

    return 0;
}
