/*
 * Tendência de um número aleatório ser par ou ímpar utilizando threads (padrão POSIX).
 *
 * Copyright(c) Eduardo Ono.
*/

#include <stdio.h>
#include <stdlib.h> // srand(), rand()
#include <time.h> // time()
#include <pthread.h>
#include <semaphore.h>

#define NUM_THREADS 10

// Recursos compartilhados
int pares = 0, impares = 0;

sem_t par, impar;

void* f(void *arg)
{
	int num, i;

	srand(time(NULL)); // "Semente" para a função rand()
	for (i = 0; i < 1000; i++)
	{
		num = rand() % 100; // Gera um número inteiro aleatório no intervalo [0, 100)
		sem_wait(&par);
		// Início da Região Crítica: par
		if (num % 2 == 0)
			pares++;
		// Fim da Região Crítica: par
		sem_post(&par);

		sem_wait(&impar);
		// Início da Região Crítica: impar
		if (num % 2 == 1)
			impares++;
		// Fim da Região Crítica: impar
		sem_post(&impar);
		printf("%d ", num);
	}
	
	return NULL;
}

int main()
{
	pthread_t t[NUM_THREADS];
	int i;

	printf("--- Executando ---\n");
	sem_init(&par, 0, 1);
	sem_init(&impar, 0, 1);

	for (i = 0; i < NUM_THREADS; i++)
	{
		pthread_create(&t[i], NULL, f, NULL);
	}

	for (i = 0; i < NUM_THREADS; i++)
	{
		pthread_join(t[i], NULL);
	}

	sem_destroy(&par);
	sem_destroy(&impar);
	printf("\n");
	printf("Pares = %d (%.2f %%)\n", pares, (float)pares/(NUM_THREADS*10));
	printf("Impares = %d (%.2f %%)\n", impares, (float)impares/(NUM_THREADS*10));
	printf("Total = %d\n", pares + impares);
	printf("--- Fim do Programa ---\n");
	
	return 0;
}
