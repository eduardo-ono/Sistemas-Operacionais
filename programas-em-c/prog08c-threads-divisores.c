/*
 * Análise de desempenho utilizando threads em linguagem C (padrão POSIX).
 * Programa (não otimizado) que determina todos os divisores de um inteiro.
 * N = 4
 *
 * Copyright(c) Eduardo Ono.
*/

#include <stdio.h>
#include <pthread.h>

void* divisores(void *p)
{
	long *v = (long*)p;
	long id = v[0];
	long num = v[1];
	long divisor, num_divisores = 0;

	for ( divisor = 1; divisor <= num; divisor++ )
		if ( num % divisor == 0 )
		{
			switch ( id ) {
				case 0: printf( "%ld\n", divisor ); break;
				case 1: printf( "\t\t%ld\n", divisor ); break;
				case 2: printf( "\t\t\t\t%ld\n", divisor ); break;
				case 3: printf( "\t\t\t\t\t\t%ld\n", divisor );
			}
			num_divisores++;
		}
	v[2] = num_divisores;
	
	return NULL;
}

int main()
{
	long v0[] = { 0, 1700012341, 0 };
	long v1[] = { 1, 1700012342, 0 };
	long v2[] = { 2, 1700012343, 0 };
	long v3[] = { 3, 1700012344, 0 };
	pthread_t t0, t1, t2, t3;

	pthread_create( &t0, NULL, divisores, (void*)v0 );
	pthread_create( &t1, NULL, divisores, (void*)v1 );
	pthread_create( &t2, NULL, divisores, (void*)v2 );
	pthread_create( &t3, NULL, divisores, (void*)v3 );
	pthread_join( t0, NULL );
	pthread_join( t1, NULL );
	pthread_join( t2, NULL );
	pthread_join( t3, NULL );

	printf("Numero de divisores de %ld = %ld\n", v0[1], v0[2]);
	printf("Numero de divisores de %ld = %ld\n", v1[1], v1[2]);
	printf("Numero de divisores de %ld = %ld\n", v2[1], v2[2]);
	printf("Numero de divisores de %ld = %ld\n", v3[1], v3[2]);
	
	return 0;
}

