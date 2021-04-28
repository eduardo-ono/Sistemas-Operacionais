#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void popularVetor(int v[], const int N)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < N; i++) {
        v[i] = rand() % 1000;
    }
}

void imprimirVetor(int v[], const int N)
{
    int i;
    for (i = 0; i < N; i++) {
        if (i % 20 == 0)
            printf("\n");
        printf("%03d ", v[i]);
    }
}

void populateSubArr(int v[], int V[],int start,int finish) {
    int i;
    for (i = 0; i < finish-start; i++) {
        v[i] = V[i+start];
    }
}

void sortSet(int v[],int N) {
    int aux;
    int i, varredura;
    short trocou = 1;

    for (varredura = 0; (varredura < N - 1) && trocou; varredura++)
    {
        trocou = 0;
        for (i = 0; i < N - 1 - varredura; i++)
        {
            if (v[i] > v[i + 1])
            {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                trocou = 1;
            }
        }
    }

}


int main()
{
    const int N = 200;
    int v[N];
    int v1[N / 2];
    int v2[N / 2];

    popularVetor(v, N);
    imprimirVetor(v, N); // Original
    printf("\n");

    //thread 1
    populateSubArr(v1, v, 0, N/2);
    sortSet(v1, N / 2);
    //

    //thread 2
    populateSubArr(v2, v, N / 2, N);
    sortSet(v2, N / 2);
    //



    imprimirVetor(v1, N/2); // Ordenado
    imprimirVetor(v2, N/2);
    printf("\n");

    return 0;
}
