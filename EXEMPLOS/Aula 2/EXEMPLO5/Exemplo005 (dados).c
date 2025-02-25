#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

FILE *arquivo;
char linha[100];
arquivo = fopen("dados.csv", "r");

if (arquivo == NULL) {

printf("Erro ao abrir o arquivo.\n");
exit(1);

}

// Lê e exibe cada linha do arquivo

while (fgets(linha, sizeof(linha), arquivo) != NULL) {

printf("%s", linha);

}

fclose(arquivo);

return 0;

}
