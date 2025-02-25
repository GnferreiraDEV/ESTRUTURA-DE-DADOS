#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int Posicao;
    char Nome[100];  
    int Pontos;
} Equipe;  

int main() {
    FILE * fp;

    fp = fopen("arquivo.txt", "r");

    if (fp == NULL) {
        printf("ERRO: o arquivo não pode ser aberto!\n");
        exit(1);
    }

    Equipe A; 

    
    fscanf(fp, "%d %s %d", &A.Posicao, A.Nome, &A.Pontos);

    
    printf("O %s está na %d° posição e tem %d pontos!\n", A.Nome, A.Posicao, A.Pontos);

    fclose(fp);

    return 0;
}
