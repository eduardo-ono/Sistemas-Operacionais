/*
    Programa      : threads-ordenacao-vetores-2threads.c
    Versão        : 
    Descrição     : Análise de desempenho da ordenação de duas threads.
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
    Vetor v1, v2;
    pthread_t t1, t2;
    double tempo;

    v1.length = N_MAX;
    v2.length = N_MAX;
    srand(time(NULL));
    popularVetor(v1.v, v1.length);
    printf("Vetor v1:\n");
    imprimirVetor(v1.v, v1.length);
    popularVetor(v2.v, v2.length);
    printf("Vetor v2:\n");
    imprimirVetor(v2.v, v2.length);

    benchmark(1);
    // Sem o uso de threads.
    // selectionSortNaoOtimizado((void *)&v1);
    // selectionSortNaoOtimizado((void *)&v2);

    // Usando threads.
    pthread_create(&t1, NULL, selectionSortNaoOtimizado, (void *)&v1);
    pthread_create(&t2, NULL, selectionSortNaoOtimizado, (void *)&v2);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    tempo = benchmark(0);

    printf("Vetor v1:\n");
    imprimirVetor(v1.v, v1.length);
    printf("Vetor v2:\n");
    imprimirVetor(v2.v, v2.length);

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
