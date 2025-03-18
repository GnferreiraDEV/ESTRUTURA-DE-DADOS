#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int N = 100000;
    int i;
    int *V = (int *)malloc(N * sizeof(int));
    clock_t t0, tf;
    double TempoCPU;

    srand(time(NULL));

    t0 = clock();

    for(i = 0; i < N; i++) V[i] = rand();
    for(i = 0; i < N; i++) printf("%d\t", V[i]);

    tf = clock();

    

    TempoCPU = ((double)(tf - t0)) /  CLOCKS_PER_SEC;

    printf("Tempo de CPU usado: %3.lf segundos\n", TempoCPU);

    return 0;

}