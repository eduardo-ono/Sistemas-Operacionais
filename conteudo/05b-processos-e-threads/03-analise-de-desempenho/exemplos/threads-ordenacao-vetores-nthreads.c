/*
    Programa      : threads-ordenacao-vetores-4threads.c
    Versão        : 
    Descrição     : Análise de desempenho da ordenação de "n" vetores usando threads.
    Desenvolvedor : Eduardo Ono
    Criado em     : 19/09/2022
    Atualizado em : 19/09/2022
    Comentários   : Utiliza o "selection sort" não otimizado na ordenação dos vetores.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

#define N_MAX 100000

typedef struct
{
    int length;
    int v[N_MAX];
} Vetor;

void popularVetor(int v[], const int N);
void *selectionSortNaoOtimizado(void *p);
void imprimirVetor(int v[], const int N);
double benchmark(int flag);

int main()
{
    const int NUM_THREADS = 4;
    Vetor obj[NUM_THREADS];
    pthread_t t[NUM_THREADS];
    double tempo;

    srand(time(NULL));
    for (int i = 0; i < NUM_THREADS; i++)
    {
        obj[i].length = N_MAX;
        popularVetor(obj[i].v, obj[i].length);
        printf("Vetor obj[%d].v:\n", i);
        imprimirVetor(obj[i].v, obj[i].length);
    }

    benchmark(1);
    // Sem o uso de threads.
    // for (int i = 0; i < NUM_THREADS; i++)
    // {
    //     selectionSortNaoOtimizado((void *)&obj[i]);
    // }

    // Usando threads.
    for (int i = 0; i < NUM_THREADS; i++)
    {
        pthread_create(&t[i], NULL, selectionSortNaoOtimizado, (void *)&obj[i]);
    }
    for (int i = 0; i < NUM_THREADS; i++)
    {
        pthread_join(t[i], NULL);
    }
    tempo = benchmark(0);

    for (int i = 0; i < NUM_THREADS; i++)
    {
        printf("Vetor obj[%d].v ordenado:\n", i);
        imprimirVetor(obj[i].v, obj[i].length);
    }

    printf("Tempo = %lf\n", tempo);

    return 0;
}

void *selectionSortNaoOtimizado(void *p)
{
    Vetor *pObj = (Vetor *)p;
    int *v = pObj->v;
    const int N = pObj->length;
    int aux;

    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
            if (v[j] < v[i])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }

    return NULL;
}

void popularVetor(int v[], const int N)
{
    for (int i = 0; i < N; i++)
    {
        v[i] = rand() % 1000;
    }
}

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

double benchmark(int flag)
{
    static clock_t inicio;
    clock_t fim;
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
