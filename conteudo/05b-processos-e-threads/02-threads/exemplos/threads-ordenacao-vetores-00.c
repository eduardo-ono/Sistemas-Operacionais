/*
    Programa      : threads-ordenacao-vetores.c
    Versão        :
    Descrição     :
    Desenvolvedor : Eduardo Ono
    Criado em     : 11/09/2022
    Atualizado em : 11/09/2022
    Comentários   :
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

void popularVetor(int v[], const int N);
void imprimirVetor(int v[], const int N);
void bubbleSort(int v[], const int N);

int main()
{
    const int N = 50000;
    int v[N];
    pthread_t t0;

    popularVetor(v, N);
    printf("Vetor original:\n");
    imprimirVetor(v, N);
    bubbleSort(v, N);
    printf("Vetor ordenado:\n");
    imprimirVetor(v, N);
    // pthread_create(&t0, NULL, f, NULL);
    // pthread_join(t0, NULL);

    return 0;
}

void popularVetor(int v[], const int N)
{
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        v[i] = rand() % 1000;
    }
}

void imprimirVetor(int v[], const int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d  ", v[i]);
        if (N > 100 && i == 10)
        {
            printf("...  ");
            i = N - 11;
        }
    }
    printf("\n\n");
}

// BubbleSort otimizado.
void bubbleSort(int v[], const int N)
{
    bool trocou = true;
    int aux;

    for (int varredura = 0; (varredura < N - 1) && trocou; varredura++)
    {
        trocou = false;
        for (int i = 0; i < N - 1 - varredura; i++)
        {
            if (v[i] > v[i + 1])
            {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                trocou = true;
            }
        }
    }
}
