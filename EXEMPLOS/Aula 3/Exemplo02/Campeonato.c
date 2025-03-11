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

Equipe* LerDados(const char *Tabela2024, int *numEquipes) {
    FILE *fp = fopen(Tabela2024, "r");
    if (fp == NULL) {
        printf("O arquivo.csv nao pode ser aberto!\n");
        exit(1);
    }

    // Aloca memória inicial para 20 equipes
    int capacidade = 20;
    Equipe *X = malloc(capacidade * sizeof(Equipe));
    if (X == NULL) {
        printf("Nao foi possivel alocar a memoria!\n");
        exit(1);
    }

    int N = 0;
    char Cabecalho[64];

    // Ler o cabeçalho (não precisamos de dados dele, então podemos descartar a linha)
    fgets(Cabecalho, sizeof(Cabecalho), fp);

    // Lê os dados do arquivo até não conseguir mais
    while (fscanf(fp, "%d;%31[^;];%31[^;];%d;%d;%d;%d;%d;%d;%d;%d;",
                  &X[N].Posicao, X[N].Estado, X[N].Time, &X[N].Pontos,
                  &X[N].J, &X[N].V, &X[N].E, &X[N].D, &X[N].GP, &X[N].GC, &X[N].SD) == 11) {
        // Calcular o aproveitamento
        X[N].Aproveitamento = 100 * (float)X[N].Pontos / (float)(3 * X[N].J);

        N++;

        // Se o número de equipes ultrapassar a capacidade alocada, realocar mais memória
        if (N >= capacidade) {
            capacidade *= 2; // dobra o tamanho
            X = realloc(X, capacidade * sizeof(Equipe));
            if (X == NULL) {
                printf("Nao foi possivel alocar mais memoria!\n");
                exit(1);
            }
        }
    }

    fclose(fp);

    *numEquipes = N; // Retorna o número de equipes lidas
    return X;
}

int main() {
    int numEquipes = 0;
    Equipe *equipes = LerDados("Tabela2024.csv", &numEquipes);

    // Exemplo de como usar os dados lidos
    for (int i = 0; i < numEquipes; i++) {
        printf("Posição: %d | Time: %s | Pontos: %d | Aproveitamento: %.2f%%\n", 
                equipes[i].Posicao, equipes[i].Time, equipes[i].Pontos, equipes[i].Aproveitamento);
    }

    // Libera a memória alocada
    free(equipes);

    return 0;
}
