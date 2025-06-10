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

    Equipe Times[4];
    int i = 0;

    // fscanf: o valor de retorno é o número de parâmetros lidos

    while(fscanf(fp, "%d %s %d", &Times[i].Posicao, Times[i].Nome, &Times[i].Pontos) == 3){
        printf("O %s está na %dª posição e tem %d pontos!\n", Times[i].Nome, Times[i].Posicao, Times[i].Pontos);
        i++;
    }

    fclose(fp);
    return 0;
}