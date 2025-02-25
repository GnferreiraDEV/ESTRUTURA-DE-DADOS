#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

FILE *arquivo;

int numero;

char palavra[50];

arquivo = fopen("arquivo.txt", "r");

if (arquivo == NULL) {

printf("Erro ao abrir o arquivo.\n");

exit(1);

}

// Lendo um número inteiro e uma palavra do arquivo

fscanf(arquivo, "%d %s", &numero, palavra);

printf("Número: %d\nPalavra: %s\n", numero, palavra);

fclose(arquivo);

return 0;

}
