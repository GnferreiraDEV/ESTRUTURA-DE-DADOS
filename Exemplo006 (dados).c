#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int ID;
    char Nome[50];
    int Idade;
} Pessoa;

int main() {
    
    system("cls");
    Pessoa X[4];
    int i = 0;
    char Cabecalho[50];
    
    FILE *fp;
    fp = fopen("../dados.csv", "r");
    if (fp == NULL) {
        printf("ERRO: arquivo dados.csv não pode ser aberto!\n");
        exit(1);
    }

    fscanf(fp, "%s", Cabecalho);
    printf("%s\n", Cabecalho);

    while(fscanf(fp, "%d,%49[^,],%d", &X[i].ID, X[i].Nome, &X[i].Idade) == 3) {
        printf("%d\t%s\t%d\n", X[i].ID, X[i].Nome, X[i].Idade);
        i++;
    }

    fclose(fp);
    return 0;

}
