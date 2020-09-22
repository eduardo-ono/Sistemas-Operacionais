/*
 * Análise de desempenho utilizando threads em linguagem C (padrão POSIX).
 * Programa (não otimizado) que determina todos os divisores de um inteiro.
 * N = 4
 *
 * Copyright(c) Eduardo Ono.
*/

#include <stdio.h>
#include <pthread.h>

void* f(void *p)
{
	int *p_num = (int*)p;
	int num, i;
	
	num = *p_num;

	for (i = 0; i < 100; i++)
	{
		switch (num)
		{
			case 3: printf("\t\t");
			case 2: printf("\t\t");
			case 1: printf("\t\t");
		}
		printf("%d\n", num);
	}
	
	return NULL;
}

int main()
{
	int a = 0, b = 1, c = 2, d = 3;
	pthread_t t0, t1, t2, t3;

	pthread_create( &t0, NULL, f, (void*)&a );
	pthread_create( &t1, NULL, f, (void*)&b );
	pthread_create( &t2, NULL, f, (void*)&c );
	pthread_create( &t3, NULL, f, (void*)&d );
	pthread_join( t0, NULL );
	pthread_join( t1, NULL );
	pthread_join( t2, NULL );
	pthread_join( t3, NULL );
	
	printf("--- Fim do Programa ---\n");
	
	return 0;
}

