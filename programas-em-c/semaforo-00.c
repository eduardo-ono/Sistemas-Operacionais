/*
 * Análise de desempenho utilizando threads em linguagem C (padrão POSIX).
 * Programa (não otimizado) que determina todos os divisores de um inteiro.
 * N = 4
 *
 * Copyright(c) Eduardo Ono.
*/

#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 4

void* f(void *p)
{
	int *p_num = (int*)p;
	int num, i, j;
	
	num = *p_num;

	for (i = 0; i < 10; i++)
	{
		// Início da Região Crítica
		for (j = 0; j < num; j++)
		{
			printf("\t");
		}
		printf("%d\n", num);
		// Fim da Região Crítica
	}
	
	return NULL;
}

int main()
{
	int v[NUM_THREADS] = { 0, 1, 2, 3 };
	pthread_t t[NUM_THREADS];
	int i;

	printf("--- Executando ---\n");
	for (i = 0; i < NUM_THREADS; i++)
	{
		pthread_create(&t[i], NULL, f, (void*)&v[i]);
	}
	for (i = 0; i < NUM_THREADS; i++)
	{
		pthread_join(t[i], NULL);
	}	
	
	printf("--- Fim do Programa ---\n");
	
	return 0;
}
