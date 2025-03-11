#include <stdio.h>
#include <stdlib.h>

typedef struct {

    int Posicao;
    char Estado[32];
    char Time[32];
    int Pontos;
    int J; // N° de jogos
    int V; // N° de vitórias
    int E; // N° de empates
    int D; // N° de derrotas
    int GP; // Gols marcados
    int GC; // Gols sofridos
    int SD; // Saldo de gols
    float Aproveitamento; // % de pontos conquistados em relação ao total de pontos disputados

} Equipe;


Equipe* LerDados(const char *Tabela2024) {

    FILE *fp = fopen(Tabela2024, "r");
    Equipe *X = malloc(20 * sizeof(Equipe));

    int N = 0;
    char Cabecalho[64];

    fscanf(fp, "%s", Cabecalho);

    while (fscanf(fp,"%d;%[^;];%[^;];%d;%d;%d;%d;%d;%d;%d;%d;", &X[N].Posicao, X[N].Estado,
    X[N].Time, &X[N].Pontos,&X[N].J,&X[N].V,&X[N].E,&X[N].D,&X[N].GP,&X[N].GC,&X[N].SD ) ==
    11) {

    X[N].Aproveitamento = 100 * (float) X[N].Pontos / (float) (3 * X[N].J);
    N++;
    }

    fclose(fp);

return X;

}
