/*
    Programa      : threads-ordenacao-vetores-v0.c
    Versão        : v0
    Descrição     :
    Desenvolvedor : Eduardo Ono
    Criado em     : 12/09/2022
    Atualizado em : 13/09/2022
    Comentários   : Não utiliza threads.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

 // Número máximo de elementos do vetor, limitado pela memória "stack".
#define N_MAX 500

// Protótipos das funções.
void popularVetor(int v[], const int N);
void imprimirVetor(int v[], const int N);
void bubbleSort(int v[], const int N);

int main()
{
    int v[N_MAX];

    popularVetor(v, N_MAX);
    printf("Vetor original:\n");
    imprimirVetor(v, N_MAX);
    // Ordena o vetor em ordem crescente.
    bubbleSort(v, N_MAX);
    printf("Vetor ordenado:\n");
    imprimirVetor(v, N_MAX);

    return 0;
}

// Popula o vetor v com valores inteiros aleatórios no intervalo [0, 1000).
void popularVetor(int v[], const int N)
{
    srand(time(0));
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
