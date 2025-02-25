#include<stdio.h>
#include<stdlib.h>

int main() {


FILE * fp;

fp = fopen("arquivo.txt", "w");

if (fp == NULL) {
    printf("ERRO: o arquivo não pode ser aberto!\n");

    exit(1);
}

fclose(fp);

return 0;

}