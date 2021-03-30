/*
 * Análise de desempenho utilizando threads em linguagem C (padrão POSIX).
 * Programa (não otimizado) que determina todos os divisores de um inteiro.
 * N = 4
 *
 * Copyright(c) Eduardo Ono.
*/

#include <stdio.h>
#include <stdlib.h>  // malloc()
#include <pthread.h>
#include <time.h>

void* divisores(void *p)
{
	long *v = (long*)p;
	long id = v[0];
	long num = v[1];
	long divisor;
	long *p_num_divisores;
	
	p_num_divisores = (long*)malloc(sizeof (long));
	*p_num_divisores = 0;

	for ( divisor = 1; divisor <= num; divisor++ )
		if ( num % divisor == 0 )
		{
			switch ( id ) {
				case 0: printf( "t0: %ld\n", divisor ); break;
				case 1: printf( "\t\tt1: %ld\n", divisor ); break;
				case 2: printf( "\t\t\t\tt2: %ld\n", divisor ); break;
				case 3: printf( "\t\t\t\t\t\tt3: %ld\n", divisor );
			}
			*p_num_divisores = *p_num_divisores + 1;
		}
	
	return (void*)p_num_divisores;
}

int main()
{
	clock_t inicio, fim;
	double tempo;
	const int NUM_THREADS = 4;
	long m[][2] = { { 0, 2000999121 },
					{ 1, 2000999123 },
					{ 2, 2000999125 }, 
					{ 3, 2000999127 } };
	pthread_t thread[4];
	long *p_num_divisores[4];
	int i;

	inicio = clock();
	for (i = 0; i < NUM_THREADS; i++)
	{
		pthread_create(&thread[i], NULL, divisores, (void*)m[i]);
	}
	for (i = 0; i < NUM_THREADS; i++)
	{
		pthread_join(thread[i], (void*)&p_num_divisores[i]);
	}
	fim = clock();
	tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

	printf("\n");
	for (i = 0; i < NUM_THREADS; i++)
	{
		printf("Numero de divisores de %ld = %ld\n", m[i][1], *p_num_divisores[i]);
	}
	printf("Tempo decorrido = %f\n", tempo);
	
	return 0;
}
