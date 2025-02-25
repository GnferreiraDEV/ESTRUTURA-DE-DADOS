#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

FILE *arquivo;

int numero = 125;

char palavra[] = "Esta é uma frase que será gravada no arquivo!";

arquivo = fopen("saida.txt", "w");

if (arquivo == NULL) {

printf("Erro ao abrir o arquivo.\n");

exit(1);

}

fprintf(arquivo, "Número: %d\nPalavra: %s\n", numero, palavra);

fclose(arquivo);

return 0;

}
