/*
    Programa      : benchmark-ordenacao-vetores.c
    Versão        : 
    Descrição     : 
    Desenvolvedor : Eduardo Ono
    Criado em     : 19/09/2022
    Atualizado em : 19/09/2022
    Comentários   : Não utiliza threads.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include "lib/vetores.c"
#include "lib/benchmark.c"

int main()
{
    const int N = 100000;
    int v[N];
    double tempo;

    srand(time(0));
    popularVetor(v, N);
    imprimirVetor(v, N);

    printf("Ordenando...");
    benchmark(1);  // Inicia o benchmark
    selectionSortNaoOtimizado(v, N);
    tempo = benchmark(0); // Finaliza o benchmark
    printf("\r");

    imprimirVetor(v, N);
    printf("Tempo = %lf\n", tempo);

    return 0;
}
