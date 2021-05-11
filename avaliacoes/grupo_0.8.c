#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>

#define TAMANHO_LISTA 200


const int N = TAMANHO_LISTA;
int v[TAMANHO_LISTA], aux1, aux2, x, varredura1, y, varredura2;

int RESULT[TAMANHO_LISTA];

short trocou1 = 1;
short trocou2 = 1;

const int LISTAUM_INICIO=0;
const int LISTAUM_FIM= (TAMANHO_LISTA / 2);
const int LISTAUM_TOTAL=LISTAUM_FIM - LISTAUM_INICIO;

const int LISTADOIS_INICIO=(TAMANHO_LISTA - LISTAUM_FIM);
const int LISTADOIS_FIM=TAMANHO_LISTA;
const int LISTADOIS_TOTAL=LISTADOIS_FIM - LISTADOIS_INICIO;

void popularVetor (int v[], const int N) {
    int i;
    srand(time(NULL));
    for (i = 0; i < N; i++) {
        v[i] = rand() % 1000;
    }
}

void imprimirVetor (int v[], const int N ) {
    int i;
    for (i = 0; i < N; i++) {
        if (i % 20 == 0) {
            printf("\n");
        }
        printf("%d ",v[i]);
    }
}
int mergeSortedArrays() {
    int i = LISTAUM_INICIO;
    int j = LISTADOIS_INICIO;
    int k = 0;

    for (i=0; i < LISTAUM_TOTAL && j < TAMANHO_LISTA;) {
        if(v[i] < v[j]) {
            RESULT[k] = v[i];
            k++;
            i++;
        }
        else {
            RESULT[k] = v[j];
            k++;
            j++;
        }
    }
    while (i < LISTAUM_FIM) {
        RESULT[k] = v[i];
        k++;
        i++;
    }
    while (j < LISTADOIS_FIM) {
        RESULT[k] = v[j];
        k++;
        j++;
    }
    int z, aux3;
    if(TAMANHO_LISTA%2 == 1) {
        for (z = TAMANHO_LISTA-1; z > 0; z--) {
            if (RESULT[z] < RESULT[z-1]) {
                aux3 = RESULT[z];
                RESULT[z] = RESULT[z-1];
                RESULT[z-1] = aux3;
            }
        }
    }
}

void* bubblesort (void *arg) {
    int *inicia = (int*)arg;
    int sub;

    if (*inicia == 0) {
        sub = TAMANHO_LISTA/2;
        for (varredura1 = 0; (varredura1 < N-sub-1) && trocou1; varredura1++) {
            trocou1 = 0;
            for (x = *inicia; x < N-1-varredura1-sub; x++) {
                if (v[x] > v[x+1]) {
                    aux1 = v[x];
                    v[x] = v[x+1];
                    v[x+1] = aux1;
                    trocou1 = 1;
                }
            }
        }
    }
    else {
        sub = 0;
        for (varredura2 = 0; (varredura2 < N-1) && trocou2; varredura2++) {
            trocou2 = 0;
            for (y = *inicia; y < N-1-varredura2-sub; y++) {
                if (v[y] > v[y+1]) {
                    aux2 = v[y];
                    v[y] = v[y+1];
                    v[y+1] = aux2;
                    trocou2 = 1;
                }
            }
        }
    }
}

int main () {
    pthread_t t[2];
    int a = 0;
    int b = TAMANHO_LISTA/2;

    popularVetor(v, N);

    printf("Original:\n");
    imprimirVetor(v, N); // Original
    printf("\n");

    pthread_create(&t[0],NULL,bubblesort,(void*) &a); // Thread 1
    pthread_join(t[0],NULL);

    pthread_create(&t[1],NULL,bubblesort,(void*) &b); // Thread 2
    pthread_join(t[1],NULL);

    mergeSortedArrays();

    printf("\nOrdenado:\n");
    imprimirVetor(RESULT, N); // Ordenado
    printf("\n");

    return 0;
}
