/*
 * threads em linguagem C (padrão POSIX).
 * N = 4
 *
 * Copyright(c) Eduardo Ono.
*/

#include <stdio.h>
#include <pthread.h> // Padrão POSIX
#include <semaphore.h>

#define NUM_THREADS 4

sem_t mutex;

void* f(void *p)
{
	int num = *((int*)p);
	int i, j;

	for (i = 0; i < 10; i++)
	{
		sem_wait(&mutex);
		// Início da Região Crítica
		for (j = 0; j < num; j++)
		{
			printf("\t");
		}
		printf("%d\n", num);
		// Fim da Região Crítica
		sem_post(&mutex);
	}
	
	return NULL;
}

int main()
{
	int v[NUM_THREADS] = { 0, 1, 2, 3 };
	pthread_t t[NUM_THREADS];
	int i;

	printf("--- Executando ---\n");
	sem_init(&mutex, 0, 1);
	for (i = 0; i < NUM_THREADS; i++)
	{
		pthread_create(&t[i], NULL, f, (void*)&v[i]);
	}
	for (i = 0; i < NUM_THREADS; i++)
	{
		pthread_join(t[i], NULL);
	}
	sem_destroy(&mutex);
	printf("--- Fim do Programa ---\n");
	
	return 0;
}
