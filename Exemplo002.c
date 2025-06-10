#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fp;
    fp = fopen("teste.txt", "r"); // Abre para leitura

    // O arquivo NÃO existe: o ponteiro será NULL (Erro)

    if (fp == NULL) {
        printf("ERRO: o arquivo não pode ser aberto!\n");
        exit(1);
    }

    fclose(fp);
    return 0;
}