#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int Numerador;
    int Denominador;
} Fracao;

//Protótipos das funções:

Fracao criarFracao(int Num, int Dem);

int mian() {

    system("cls");

    Fracao F1 = criarFracao( 3, 7);
    Fracao F2 = criarFracao( 16, 20);
    Fracao F3 = criarFracao( -20, 10);


    return 0;
}

//Implementação das funções:

Fracao criarFracao(int Num, int Den){

    Fracao F;

    F.Numerador = Num;
    F.Denominador = Den;

    return F;

}