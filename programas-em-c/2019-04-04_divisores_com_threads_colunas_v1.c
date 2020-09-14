// OBS.: Algoritmo não otimizado
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <pthread.h>

void* determinarDivisores( void *p )
{
	long *v = (long*)p;
	long id = v[0];
	long num = v[1];
	long divisor;
	
	for ( divisor = 1; divisor <= num; divisor++ )
		if ( num%divisor == 0 )
		{
			if ( id == 1 )
				printf( "%ld\n", divisor );  // Recurso compartilhado: tela de saída
			else if ( id == 2 )
				printf( "\t\t%ld\n", divisor );  // Recurso compartilhado
			else
				printf( "\t\t\t\t%ld\n", divisor );  // Recurso compartilhado
		}
			
	return NULL;
}

int main()
{
	long v1[] = { 1, 900123453 };
	long v2[] = { 2, 900123457 };
	long v3[] = { 3, 900123459 };
	pthread_t t1, t2, t3;
	
	pthread_create( &t1, NULL, determinarDivisores, (void*)v1 );
	pthread_create( &t2, NULL, determinarDivisores, (void*)v2 );
	pthread_create( &t3, NULL, determinarDivisores, (void*)v3 );
	pthread_join( t1, NULL );
	pthread_join( t2, NULL );
	pthread_join( t3, NULL );
	
	return 0;
}

