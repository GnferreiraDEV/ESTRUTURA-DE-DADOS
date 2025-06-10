#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int Posicao;
    char Nome[30];
    int Pontos;
} Equipe;

int main() {

    FILE *fp;
    fp = fopen("classificacao.txt", "r"); // Abre para leitura

    // O arquivo NÃO existe: o ponteiro será NULL (Erro)

    if (fp == NULL) {
        printf("ERRO: o arquivo não pode ser aberto!\n");
        exit(1);
    }

    Equipe A, B;

    fscanf(fp, "%d %s %d", &A.Posicao, A.Nome, &A.Pontos);
    printf("O %s está na %dª posição e tem %d pontos!\n", A.Nome, A.Posicao, A.Pontos);

    fscanf(fp, "%d %s %d", &A.Posicao, A.Nome, &A.Pontos);
    printf("O %s está na %dª posição e tem %d pontos!\n", A.Nome, A.Posicao, A.Pontos);

    fscanf(fp, "%d %s %d", &A.Posicao, A.Nome, &A.Pontos);
    printf("O %s está na %dª posição e tem %d pontos!\n", A.Nome, A.Posicao, A.Pontos);

    fscanf(fp, "%d %s %d", &A.Posicao, A.Nome, &A.Pontos);
    printf("O %s está na %dª posição e tem %d pontos!\n", A.Nome, A.Posicao, A.Pontos);

    fscanf(fp, "%d %s %d", &B.Posicao, B.Nome, &B.Pontos);
    printf("O %s está na %dª posição e tem %d pontos!\n", B.Nome, B.Posicao, B.Pontos);

    

    fclose(fp);
    return 0;
}