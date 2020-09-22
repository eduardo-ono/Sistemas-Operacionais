/*
 * An�lise de desempenho utilizando threads em linguagem C (padr�o POSIX).
 * Programa (n�o otimizado) que determina todos os divisores de um inteiro.
 * N = 4
 *
 * Copyright(c) Eduardo Ono.
*/

#include <stdio.h>
#include <stdlib.h>  // malloc()
#include <pthread.h>

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
				case 0: printf( "%ld\n", divisor ); break;
				case 1: printf( "\t\t%ld\n", divisor ); break;
				case 2: printf( "\t\t\t\t%ld\n", divisor ); break;
				case 3: printf( "\t\t\t\t\t\t%ld\n", divisor );
			}
			*p_num_divisores = *p_num_divisores + 1;
		}
	
	return (void*)p_num_divisores;
}

int main()
{
	long v0[] = { 0, 2000999121, 0 };
	long v1[] = { 1, 2000999123, 0 };
	long v2[] = { 2, 2000999125, 0 };
	long v3[] = { 3, 2000999127, 0 };
	pthread_t t0, t1, t2, t3;
	long *p_num_divisores[4];

	pthread_create( &t0, NULL, divisores, (void*)v0 );
	pthread_create( &t1, NULL, divisores, (void*)v1 );
	pthread_create( &t2, NULL, divisores, (void*)v2 );
	pthread_create( &t3, NULL, divisores, (void*)v3 );
	pthread_join( t0, (void*)&p_num_divisores[0] );
	pthread_join( t1, (void*)&p_num_divisores[1] );
	pthread_join( t2, (void*)&p_num_divisores[2] );
	pthread_join( t3, (void*)&p_num_divisores[3] );

	printf("Numero de divisores de %ld = %ld\n", v0[1], *p_num_divisores[0]);
	printf("Numero de divisores de %ld = %ld\n", v1[1], *p_num_divisores[1]);
	printf("Numero de divisores de %ld = %ld\n", v2[1], *p_num_divisores[2]);
	printf("Numero de divisores de %ld = %ld\n", v3[1], *p_num_divisores[3]);
	
	printf("Tamanho do tipo short em bytes = %ld\n", sizeof (short));
	printf("Tamanho do tipo int em bytes   = %ld\n", sizeof (int));
	printf("Tamanho do tipo long em bytes  = %ld\n", sizeof (long));
	
	return 0;
}

