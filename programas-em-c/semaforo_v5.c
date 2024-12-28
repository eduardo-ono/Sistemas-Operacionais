/*
	Sincronização de N processos/threads através de semáforos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>  // <-- Novo!
#define NUM_THREADS 4

// Variáveis globais
sem_t s;

void* imprimir( void *p )
{
	int tid = *( (int*)p );
	int i, j;
	int s_value;
	
	for ( i = 0; i < 20; i++ )
	{
		sem_wait( &s );  // <--
		sem_getvalue( s, &s_value );
		printf( "%d", s_value );
		// --- REGIÃO CRÍTICA ---
		for ( j = 0; j <= tid; j++ )
			printf( "\t" );
		printf( "%d\n", tid );
		// --- FIM DA REGIÃO CRÍTICA ---
		sem_post( &s );  // <--
	}

	return NULL;
}

int main( int argc, char* argv[] )
{
	int tid[NUM_THREADS];
	pthread_t t[NUM_THREADS];
	int i;

	// 2º parâmetro: 0 para threads; diferente de 0 para processos
	// 3º parâmetro: valor inicial
	sem_init( &s, 0 , 1 );  // <-- Inicia o semáforo com valor 1

	// Dispara as N threads
	for ( i = 0; i < NUM_THREADS; i++ )
	{
		tid[i] = i;
		pthread_create( &t[i], NULL, imprimir, (void*)&tid[i] );
	}

	for ( i = 0; i < NUM_THREADS; i++ )
	{
		pthread_join( t[i], NULL );
	}

	sem_destroy( &s );  // <--
	
	return 0;
}

