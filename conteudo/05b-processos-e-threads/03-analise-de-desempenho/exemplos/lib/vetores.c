#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Popula o vetor v com valores inteiros aleatórios no intervalo [0, 1000).
void popularVetor(int v[], const int N)
{
    for (int i = 0; i < N; i++)
    {
        v[i] = rand() % 1000;
    }
}

// Imprime os elementos do vetor v.
// Caso N > 100, imprime somente os n = 10 primeiros e os n = 10 últimos elementos.
void imprimirVetor(int v[], const int N)
{
    int n = 10;

    if (N > 100)
    {
        for (int i = 0; i < n; i++)
            printf("%d  ", v[i]);
        printf("...  ");
    }
    else
        n = N;
    for (int i = N - n; i < N; i++)
        printf("%d  ", v[i]);
    printf("\n\n");
}

// BubbleSort otimizado.
void bubbleSort(int v[], const int N)
{
    bool ordenado = false;
    int aux;

    for (int varredura = 0; (varredura < N - 1) && !ordenado; varredura++)
    {
        ordenado = true;
        for (int i = 0; i < N - 1 - varredura; i++)
        {
            if (v[i] > v[i + 1])
            {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                ordenado = false;
            }
        }
    }
}

void selectionSortNaoOtimizado(int v[], const int N)
{
    int aux;

    for (int i = 0; i < N - 1; i++ )
        for (int j = i + 1; j < N; j++)
            if (v[i] < v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
}
