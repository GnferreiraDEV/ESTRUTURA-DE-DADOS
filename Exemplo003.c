#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fp;
    fp = fopen("tabela.txt", "w"); // Abre para leitura

    // O arquivo NÃO existe: o ponteiro será NULL (Erro)

    if (fp == NULL) {
        printf("ERRO: o arquivo não pode ser aberto!\n");
        exit(1);
    }

    int P = 12;
    char Frase[] = "Esta frase ser\0á gravada no arquivo\n";
    fprintf(fp, "%d\t%s", P, Frase);
    fprintf(fp, "%d", &P);
    

    fclose(fp);
    return 0;
}