// Algoritmo de Peterson para solu��o de exclus�o m�tua

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <conio.h>

// Vari�veis globais
int _valor;
int flag[2] = { 0, 0 };  // flag � um vetor de booleanos
int turno = 0;  // booleano, turno significa "vez"

void* f( void *p )
{
	int id = *((int*)p);
	int i;
	
	for ( i = 0; i < 10; i++ )
	{
		// Algoritmo de Peterson
		flag[id] = 1;  // Quero entrar na Regi�o Cr�tica
		turno = !id;  // Passo a vez para o outro
		// Enquanto o outro quer entrar e n�o � minha vez, aguardo...
		while ( flag[!id] == 1 && turno != id ) ;
	
		// In�cio da regi�o cr�tica
		_valor = id;
		if ( id == 1 ) printf( "\t\t" );
		printf( "ID: %d\t %d\n", id, _valor );
	// Fim da regi�o cr�tica
		flag[id] = 0;  // N�o quero entrar na regi�o cr�tica
	} // for

	return NULL;
}

int main()
{
	int id1 = 0, id2 = 1;  // deve ser 0 e 1
	pthread_t t1, t2;

	printf( "main: Executando...\n\n" );
	pthread_create( &t1, NULL, f, (void*)&id1 );
	pthread_create( &t2, NULL, f, (void*)&id2 );

	pthread_join( t1, NULL );
	pthread_join( t2, NULL );
	
	return 0;
}

