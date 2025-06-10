#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO -1

typedef struct {
    int Posicao;
    char Estado[32];
    char Time[32];
    int Pontos;
    int J; // N° de jogos
    int V; // Vitórias
    int E; // Empates
    int D; // Derrotas
    int GP; // Gols marcados
    int GC; // Gols sofridos
    int SD; // Saldo de gols
    float Aproveitamento;
} Equipe;

// Protótipo de função

Equipe *LerDados(const char *NomeArquivo);
int getGolsMarcados(Equipe *Tabela, char *Nome);


// Main

int main() {

    Equipe *Dados = LerDados("Tabela2024.csv");

    for(int i = 0; i < 20; i++)
        printf("%s \t %.2f\n", Dados[i].Time, Dados[i].Aproveitamento);

        int temp = getGolsMarcados(Dados, "Atlético Mineiro");
        printf("%d\n", temp);
    
        
    return 0;
}

// Implementação das funções

Equipe *LerDados(const char *NomeArquivo){
    FILE *fp = fopen(NomeArquivo, "r");
    if (fp == NULL) {
        printf("ERRO:O arquivo não pode ser aberto!\n");
        exit(ERRO);
    }

    Equipe *X = malloc(20 * sizeof(Equipe));
    if(X == NULL) {
        printf("ERRO: Não foi possível alocar memória para o vetor!\n");
        exit(ERRO);
    }

    int N = 0; // Indice para o vetor de equipes.
    char Cabecalho[100]; // Para guardar a primeira linha, que não será usada.

    fscanf(fp, "%[^\n]", Cabecalho);

    while(fscanf(fp, "%d;%[^;];%[^;];%d;%d;%d;%d;%d;%d;%d;%d",&X[N].Posicao,X[N].Estado,X[N].Time,&X[N].Pontos,&X[N].J,&X[N].V,&X[N].E,&X[N].D,&X[N].GP,&X[N].GC,&X[N].SD) == 11) {
        X[N].Aproveitamento = 100.0 * X[N].Pontos / (3.0 * X[N].J);
        N++;
    }

    fclose(fp);
    return X;

}

int getGolsMarcados(Equipe *Tabela, char *Nome)  {
    for (int i = 0; i < 20; i++)
        if (strcmp(Tabela[i].Time, Nome) == 0)
            return Tabela[i].GP;
    return ERRO;
}