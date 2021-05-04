#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>
#define tamanhoUm 200
#define tamanhoDois tamanhoUm/2

void popularVetor(int v[], const int N);
void imprimirVetor(int v[], const int N );
void juntarVetores(int A[], int B[], int tamanho, int vAux[]);
void *ordenarVetor(void *arg);

int main()
{
    int v[tamanhoUm];
    int vAux[tamanhoUm];
    pthread_t t0, t1;

    popularVetor(v, tamanhoUm);
    printf("Vetor original");
    imprimirVetor(v, tamanhoUm);

    int *primeiraMetade = v;
    int *segundaMetade = v + tamanhoDois;

    pthread_create(&t0, NULL, ordenarVetor, (void *)primeiraMetade);
	pthread_create(&t1, NULL, ordenarVetor, (void *)segundaMetade);

	pthread_join(t0, NULL);
	pthread_join(t1, NULL);

    juntarVetores(primeiraMetade, segundaMetade, tamanhoDois, vAux);

    printf("\n\nVetor ordenado");
    imprimirVetor(vAux, tamanhoUm);

    return 0;
}

void imprimirVetor(int v[], const int N )
{
    int i;
    for (i = 0; i < N; i++) {
        if (i % 20 == 0)
            printf("\n");
        printf("%03d ", v[i]);
    }
}

void popularVetor(int v[], const int N)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < N; i++) {
        v[i] = rand() % 1000;
    }
}

void juntarVetores(int A[], int B[], int tamanho, int vAux[])
{
    int i, j, id;
    i = j = id = 0;

    for (id = 0; id < tamanho + tamanho; id++)
    {
        if (j >= tamanho)
        {
            vAux[id] = A[i];
            i += 1;
        }
        else if (i >= tamanho)
        {
            vAux[id] = B[j];
            j += 1;
        }
        else if (A[i] <= B[j])
        {
            vAux[id] = A[i];
            i += 1;
        }
        else
        {
            vAux[id] = B[j];
            j += 1;
        }
    }
}

void *ordenarVetor(void *arg)
{
    int *vetor = (int *) arg;
    short trocou = 1;
    int aux, i, varredura;

    for (varredura = 0; (varredura < tamanhoDois-1) && trocou; varredura++)
    {
        trocou = 0;
        for (i = 0; i < tamanhoDois-1-varredura; i++)
        {
            if (vetor[i] > vetor[i+1])
            {
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                trocou = 1;
            }
        }
    }
}
