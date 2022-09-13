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
#define N_MAX 100

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
    Estrutura obj;
    pthread_t t1;

    obj.length = N_MAX;
    srand(time(0));
    popularVetor(obj.v, obj.length);
    printf("Vetor original:\n");
    imprimirVetor(obj.v, obj.length);

    // Ordena o vetor em ordem crescente.
    pthread_create(&t1, NULL, bubbleSort, (void *)&obj);
    pthread_join(t1, NULL);

    printf("Vetor ordenado:\n");
    imprimirVetor(obj.v, obj.length);

    return 0;
}

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
