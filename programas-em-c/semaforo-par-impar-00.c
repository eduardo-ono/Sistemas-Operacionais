/*
 * Tendência de um número aleatório ser par ou ímpar utilizando threads (padrão POSIX).
 *
 * Copyright(c) Eduardo Ono.
*/

#include <stdio.h>
#include <stdlib.h> // rsnd(), srand()
#include <time.h> // time()
#include <pthread.h>

#define NUM_THREADS 10

// Recursos compartilhados
int pares = 0, impares = 0;

void* f(void *arg)
{
	int num, i;

	srand(time(NULL)); // "Semente" para a função rand()
	for (i = 0; i < 1000; i++)
	{
		num = rand() % 100; // Gera um número inteiro aleatório no intervalo [0, 100)
		// Início da Região Crítica
		if (num % 2 == 0)
			pares++;
		else
			impares++;
		// Fim da Região Crítica
	}
	
	return NULL;
}

int main()
{
	pthread_t t[NUM_THREADS];
	int i;

	printf("--- Executando ---\n");
	for (i = 0; i < NUM_THREADS; i++)
	{
		pthread_create(&t[i], NULL, f, NULL);
	}
	for (i = 0; i < NUM_THREADS; i++)
	{
		pthread_join(t[i], NULL);
	}
	printf("Pares = %d\n", pares);
	printf("Impares = %d\n", impares);
	printf("Total = %d\n", pares + impares);
	printf("--- Fim do Programa ---\n");
	
	return 0;
}
