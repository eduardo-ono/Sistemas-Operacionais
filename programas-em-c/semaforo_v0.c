/*
	Sincronização de processos
	Semáforos
*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* imprimir0( void *p )
{
	int i, j;
	
	for ( i = 0; i < 10; i++ )
	{
		printf( "%d\n", 0 );
	}

	return NULL;
}

void* imprimir1( void *p )
{
	int i, j;
	
	for ( i = 0; i < 10; i++ )
	{
		printf( "\t" );
//		for ( j = 0; j < 1000; j++ );
		printf( "%d\n", 1 );
	}

	return NULL;
}

int main( int argc, char* argv[] )
{
	int tid0 = 0, tid1 = 1;
	pthread_t t0, t1;
	
	printf( "--> Executando %s\n\n", argv[0] );
	
	pthread_create( &t0, NULL, imprimir0, NULL );
	pthread_create( &t1, NULL, imprimir1, NULL );

	pthread_join( t0, NULL );
	pthread_join( t1, NULL );
	
	return 0;
}

