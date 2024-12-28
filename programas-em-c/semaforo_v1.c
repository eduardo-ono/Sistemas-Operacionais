/*
	Sincroniza��o de processos/threads
	Sem�foros
*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>  // <--

// Vari�veis globais
sem_t s;

void* imprimir0( void *p )
{
	int i;
	
	for ( i = 0; i < 10; i++ )
	{
		sem_wait( &s );
		printf( "%d\n", 0 );
		sem_post( &s );
	}

	return NULL;
}

void* imprimir1( void *p )
{
	int i;
	
	for ( i = 0; i < 10; i++ )
	{
		sem_wait( &s );
		printf( "\t" );
		printf( "%d\n", 1 );
		sem_post( &s );
	}

	return NULL;
}

int main( int argc, char* argv[] )
{
	pthread_t t0, t1;

	// 2� par�metro: 0 para threads; diferente de 0 para processos
	// 3� par�metro: valor inicial
	sem_init( &s, 0 , 1 );  // Inicia o sem�foro

	pthread_create( &t0, NULL, imprimir0, NULL );
	pthread_create( &t1, NULL, imprimir1, NULL );

	pthread_join( t0, NULL );
	pthread_join( t1, NULL );

	sem_destroy( &s );
	
	return 0;
}

