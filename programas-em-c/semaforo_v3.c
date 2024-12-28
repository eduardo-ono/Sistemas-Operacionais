/*
	Sincronização de processos/threads
	Semáforos
*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>  // <-- Novo!

// Variáveis globais
sem_t s;

void* imprimir( void *p )
{
	int tid = *( (int*)p );
	int i;
	
	for ( i = 0; i < 10; i++ )
	{
		sem_wait( &s );  // <--
		// --- REGIÃO CRÍTICA ---
		if ( tid == 0 )
			printf( "%d\n", 0 );
		else
		{
			printf( "\t" );
			printf( "%d\n", 1 );
		}
		// --- FIM DA REGIÃO CRÍTICA ---
		sem_post( &s );  // <--
	}

	return NULL;
}

int main( int argc, char* argv[] )
{
	int tid0 = 0, tid1 = 1;
	pthread_t t0, t1;

	// 2º parâmetro: 0 para threads; diferente de 0 para processos
	// 3º parâmetro: valor inicial
	sem_init( &s, 0 , 1 );  // <-- Inicia o semáforo

	pthread_create( &t0, NULL, imprimir, (void*)&tid0 );
	pthread_create( &t1, NULL, imprimir, (void*)&tid1 );

	pthread_join( t0, NULL );
	pthread_join( t1, NULL );

	sem_destroy( &s );  // <--
	
	return 0;
}

