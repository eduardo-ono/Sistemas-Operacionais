/*
 * threads em linguagem C (padrão POSIX).
 * Programa que conta os pares de 1 até um número inteiro qualquer.
 *
 * Copyright(c) Eduardo Ono.
*/

#include <stdio.h>
#include <time.h>
#include <pthread.h>
#include <semaphore.h>

// Variáveis globais
int pares = 0;

sem_t mutex;

void* contarPares(void *p)
{
    int num = *((int*)p);
    int i;

    for (i = 1; i <= num; i++)
    {
        // Verifica se é par
        if (i % 2 == 0)
        {
            sem_wait(&mutex);
            // Inicio da Região Crítica
            pares++;
            // Fim da Região Crítica
            sem_post(&mutex);
        }
    }

    return NULL;
}

int main()
{
    int num1 = 100000;
    int num2 = 100000;
    clock_t now;
    double tempo;
    pthread_t t1, t2;

    printf("\n--- Executando ---\n");

    now = clock();
    // 0 = semáforo compartilhado entre threads mas não entre processos.
    // 1 = valor inicial do semáforo.
    sem_init(&mutex, 0, 1);
    pthread_create(&t1, NULL, contarPares, (void*)&num1);
    pthread_create(&t2, NULL, contarPares, (void*)&num2);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    sem_destroy(&mutex);
    tempo = (double)(clock() - now) / CLOCKS_PER_SEC;

    printf("Pares = %d\n", pares);
    printf("Tempo = %.2f\n", tempo);

    printf("--- Fim do programa ---\n");

    return 0;
}
