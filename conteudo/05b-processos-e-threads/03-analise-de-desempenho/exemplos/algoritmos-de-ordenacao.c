/*
    Programa      : algoritmos-de-ordenacao.c
    Versão        : 
    Descrição     : 
    Desenvolvedor : Eduardo Ono
    Criado em     : 13/09/2022
    Atualizado em : 13/09/2022
    Comentários   : Não utiliza threads.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include "./lib/vetores.c"
#include "./lib/benchmark.c"


int main()
{
    const int N = 300;
    int v[N];
    double tempo;

    srand(time(0));
    popularVetor(v, N);
    printf("Vetor original:\n");
    imprimirVetor(v, N);
    benchmark(1);
    bubbleSort(v, N);
    tempo = benchmark(0);
    printf("Vetor ordenado:\n");
    imprimirVetor(v, N);
    printf("Tempo: %lf\n", tempo);

    return 0;
}
