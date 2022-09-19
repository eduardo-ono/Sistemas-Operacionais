/*
    Programa      : benchmark.c
    Versão        : 
    Descrição     : 
    Desenvolvedor : Eduardo Ono
    Criado em     : 13/09/2022
    Atualizado em : 19/09/2022
    Comentários   : 
*/

#include <stdbool.h>
#include <stdlib.h>
#include <time.h> // clock_t

double benchmark(int flag)
{
    static clock_t inicio;
    static clock_t fim;
    double tempo = 0;

    if (flag)
    {
        inicio = clock();
    }
    else
    {
        fim = clock();
        tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    }

    return tempo;
}
