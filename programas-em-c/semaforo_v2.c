/*
	Sincronização de processos
	Semáforos
*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* imprimir( void *p )
{
	int tid = *( (int*)p );
	int i, j;
	
	for ( i = 0; i < 10; i++ )
	{
		if ( tid == 0 )
			printf( "%d\n", 0 );
		else
		{
			printf( "\t" );
			printf( "\t%d\n", 1 );
		}
	}

	return NULL;
}

int main( int argc, char* argv[] )
{
	int tid0 = 0, tid1 = 1;
	pthread_t t0, t1;
	
	printf( "--> Executando %s\n\n", argv[0] );
	
	pthread_create( &t0, NULL, imprimir, (void*)&tid0 );
	pthread_create( &t1, NULL, imprimir, (void*)&tid1 );

	pthread_join( t0, NULL );
	pthread_join( t1, NULL );
	
	return 0;
}

