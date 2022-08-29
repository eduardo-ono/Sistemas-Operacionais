/*
Programa      : 
Versão        : 
Descrição     : 
Desenvolvedor : Eduardo Ono
Criado em     : 22/08/2022
Atualizado em : 
Comentários   : 
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "vetores.h"

int main()
{
    const int N = 10000;
    int v[N], menor, maior;

    // Popula o vetor
    srand(time(0));
    for (int i = 0; i < N; i++)
        v[i] = rand() % 100;

    imprimirVetor(v, N);
    menor = menorElemento(v, N);
    printf("Menor elemento = %d\n", menor);
    maior = maiorElemento(v, N);
    printf("Maior elemento = %d\n", maior);

    return 0;
}
