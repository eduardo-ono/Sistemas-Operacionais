/*
Programa      : divisao-vetores.c
Versão        : 
Descrição     : 
Desenvolvedor : Eduardo Ono
Criado em     : 23/08/2022
Atualizado em : 23/08/2022
Comentários   : 
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void imprimirVetor(int v[], const int N);

int main()
{
    const int N = 2;
    int n1, n2;
    int v[N], *v1;

    // Popula o vetor
    for (int i = 0; i < N; i++)
        v[i] = i;

    n1 = N / 2;
    n2 = N / 2 + N % 2;
    v1 = &v[N / 2];

    imprimirVetor(v, n1);
    imprimirVetor(v1, n2);

    return 0;
}

void imprimirVetor(int v[], const int N)
{
    for (int i = 0; i < N; i++)
        printf("%d ", v[i]);
    printf("\n");
}
