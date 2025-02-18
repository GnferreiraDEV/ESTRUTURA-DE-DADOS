#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int Numerador;
    int Denominador;
} Fracao;

//Protótipos das funções:

Fracao criarFracao( int Num, int Dem );
Fracao simplificarFracao( Fracao F );
Fracao somarFracao();

int mian() {

    system("cls");

    Fracao F1 = criarFracao( 3, 7);
    Fracao F2 = criarFracao( 16, 20);
    Fracao F3 = criarFracao( -20, 30);

    printf(%d/%d\n)


    return 0;
}

//Implementação das funções:

Fracao criarFracao(int Num, int Den){

    Fracao F;

    F.Numerador = Num;
    F.Denominador = Den;

    return F;

}

Fracao simplificarFracao( Fracao F ) {
    int Menor = ( F.Numerador < F.Denominador ) ? F.Numerador : F.Denominador;
    int MDC = 1;

    for(int i = 1; i <= abs(Menor); i++) 
        if(F.Numerador %  i == 0 && F.Denominador % i == 0)
        MDC = i;

    F.Numerador = F.Numerador /MDC;
    F.Denominador = F.Denominador /MDC;
    return F;
}

Fracao somarFracao();