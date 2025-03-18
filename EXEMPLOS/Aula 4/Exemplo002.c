#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mian(){

    clock_t t0, tf;
    double TempoCPU;

    t0 = clock();

    tf = clock();

    TempoCPU = ((double)(tf - t0)) /  CLOCKS_PER_SEC;

    return 0;

}