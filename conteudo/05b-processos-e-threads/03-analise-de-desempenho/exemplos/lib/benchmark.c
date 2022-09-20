/*
    Programa      : benchmark.c
    Versão        : 
    Descrição     : 
    Desenvolvedor : Eduardo Ono
    Criado em     : 13/09/2022
    Atualizado em : 19/09/2022
    Comentários   : 
*/

#include <time.h> // clock_t, CLOCKS_PER_SEC

double benchmark(int flag)
{
    static clock_t inicio = 0;

    return (flag) ? inicio = clock() : (double)(clock() - inicio) / CLOCKS_PER_SEC;
}
