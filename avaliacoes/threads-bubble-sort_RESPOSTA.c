#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>
#include <math.h>

void popularVetor(int v[], const int N);
void imprimirVetor(int v[], const int N );
int bubbleSort(int v[], const int N);

typedef struct {
    int* v;
    int n;
} Array;

void* thread(void* arg)
{
    Array array = *((Array*)arg);
    int* v = array.v;
    const int N = array.n;

    bubbleSort(v, N);

    return NULL;
}

int* mergeVetor(int v1[], const int N1, int v2[], const int N2)
{
	int *vAux;
	int i = 0, j = 0, k = 0;

	vAux = (int*)calloc((N1 + N2), sizeof (int)); // ERRO de verificação!

	for (k = 0; k < (N1 + N2); k++)
	{
		if (j >= N2) {
			vAux[k] = v1[i++];
		}
		else if (i >= N1) {
			vAux[k] = v2[j++];
		}
		else if (v1[i] <= v2[j]) {
			vAux[k] = v1[i++];
		}
		else {
			vAux[k] = v2[j++];
		}
	}

    return vAux;
}

int copiarVetor(int fonte[], int destino[], const int N)
{
    int i;

    for (i = 0; i < N; i++)
    {
        destino[i] = fonte[i];
    }

    return 0;
}

int main()
{
    const int N = 50000;
    int v[N], u[N];
    Array v1, v2;
    pthread_t t0, t1;
    int *vAux;
	clock_t now;
    double tempo;

    popularVetor(v, N);
    copiarVetor(v, u, N);
    printf("Vetor original:\n");
    imprimirVetor(v, N);

    // Início do benchmark (sem uso de threads)
    printf("=> Ordenando sem uso de threads...\n");
	now = clock();
    bubbleSort(u, N);

    // Fim do benchmark (sem uso de threads)
	now = clock() - now;
    tempo = (double)now/CLOCKS_PER_SEC;;
	printf("=> Tempo decorrido sem uso de threads = %lf\n", tempo);

    // Início do benchmark (com uso de threads)
    printf("=> Ordenando com uso de threads...\n");
	now = clock();
    v1.v = v;
    v1.n = N/2;
    v2.v = v + N/2;
    v2.n = N % 2 == 0 ? N/2 : N/2 + 1;
    pthread_create(&t0, NULL, thread, (void*)&v1);
    pthread_create(&t1, NULL, thread, (void*)&v2);
    pthread_join(t0, NULL);
    pthread_join(t1, NULL);
    // bubbleSort(v1.v, v1.n);
    // bubbleSort(v2.v, v2.n);
    vAux = mergeVetor(v1.v, v1.n, v2.v, v2.n);
    copiarVetor(vAux, v, N);

    // Fim do benchmark (com uso de threads)
	now = clock() - now;
    tempo = (double)now/CLOCKS_PER_SEC;
	printf("=> Tempo decorrido com uso de threads = %lf\n", tempo);

    printf("\nVetor ordenado:\n");
    imprimirVetor(v, N);
    printf("\n");

    return 0;
}

void popularVetor(int v[], const int N)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < N; i++)	{
        v[i] = rand() % 1000;
    }
}

void imprimirVetor(int v[], const int N )
{
    int i;

    if (N <= 1000)
    {
        for (i = 0; i < N; i++) {
            if (i % 20 == 0)
                printf("\n");
            printf("%3d ", v[i]);
        }
    }
    else
        printf("Número de elementos = %d > 10000", N);
    printf("\n\n");
}

void trocar(int* x, int* y)
{
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int bubbleSort(int v[], const int N)
{
    int i, varredura, aux;
    short trocou = 1;
    int j;

    for (varredura = 0; (varredura < N-1) && trocou; varredura++)
    {
        trocou = 0;
        for (i = 0; i < N-1-varredura; i++)
        {
            if (v[i] > v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                trocou = 1;
            }
        }
    }

    return 0;
}
