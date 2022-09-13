/*
    Programa      : threads-ordenacao-vetores-v0.c
    Versão        : v1
    Descrição     :
    Desenvolvedor : Eduardo Ono
    Criado em     : 12/09/2022
    Atualizado em : 13/09/2022
    Comentários   : Threads no padrão POSIX.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>

 // Número máximo de elementos do vetor, limitado pela memória "stack".
#define N_MAX 1000

typedef struct
{
    int length;
    int v[N_MAX];
} Estrutura;

// Protótipos das funções.
void popularVetor(int v[], const int N);
void imprimirVetor(int v[], const int N);
void *bubbleSort(void *p);

int main()
{
    Estrutura obj1, obj2;
    pthread_t t1, t2;

    obj1.length = N_MAX;
    obj2.length = N_MAX;
    popularVetor(obj1.v, obj1.length);
    popularVetor(obj2.v, obj2.length);
    printf("Vetor original 1:\n");
    imprimirVetor(obj1.v, obj1.length);
    printf("Vetor original 2:\n");
    imprimirVetor(obj2.v, obj2.length);

    // Ordena os vetores em ordem crescente.
    pthread_create(&t1, NULL, bubbleSort, (void *)&obj1);
    pthread_create(&t2, NULL, bubbleSort, (void *)&obj2);

    pthread_join(t1, NULL);
    printf("Vetor ordenado 1:\n");
    imprimirVetor(obj1.v, obj1.length);

    pthread_join(t2, NULL);
    printf("Vetor ordenado 1:\n");
    imprimirVetor(obj1.v, obj1.length);

    return 0;
}

// Popula o vetor v com valores inteiros aleatórios no intervalo [0, 1000).
void popularVetor(int v[], const int N)
{
    static time_t *seed;

    srand(time(&seed));
    for (int i = 0; i < N; i++)
    {
        v[i] = rand() % 1000;
    }
    seed++;
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
void *bubbleSort(void *p)
{
    Estrutura *pObj = (Estrutura *)p;
    const int N = pObj->length; // const int N = (*pObj).length;
    int *v = pObj->v; // int *v = (*pObj).v;
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

    return NULL;
}
