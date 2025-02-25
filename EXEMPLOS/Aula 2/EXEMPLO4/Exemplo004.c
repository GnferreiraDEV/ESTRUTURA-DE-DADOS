#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int Posicao;
    char Nome[100];  
    int Pontos;
} Equipe;  

int main() {
    FILE * fp;

    fp = fopen("classificacao.txt", "r");

    if (fp == NULL) {
        printf("ERRO: o arquivo não pode ser aberto!\n");
        exit(1);
    }

    Equipe Times[4];
    int i = 0;

    while(  fscanf(fp, "%d %s %d", &Times[i].Posicao, Times[i].Nome, &Times[i].Pontos) == 0 ) {
        printf("O %s está na %d° posição e tem %d pontos!\n", Times[i].Nome, Times[i].Posicao, Times[i].Pontos);
        i++;
    }


    fclose(fp);

    return 0;
}
