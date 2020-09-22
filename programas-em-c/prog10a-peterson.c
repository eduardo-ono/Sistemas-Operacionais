// Algoritmo de Peterson para solução de exclusão mútua

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <conio.h>

// Variáveis globais
int _valor;
int flag[2] = { 0, 0 };  // flag é um vetor de booleanos
int turno = 0;  // booleano, turno significa "vez"

void* f( void *p )
{
	int id = *((int*)p);
	int i;
	
	for ( i = 0; i < 10; i++ )
	{
		// Algoritmo de Peterson
		flag[id] = 1;  // Quero entrar na Região Crítica
		turno = !id;  // Passo a vez para o outro
		// Enquanto o outro quer entrar e não é minha vez, aguardo...
		while ( flag[!id] == 1 && turno != id ) ;
	
		// Início da região crítica
		_valor = id;
		if ( id == 1 ) printf( "\t\t" );
		printf( "ID: %d\t %d\n", id, _valor );
	// Fim da região crítica
		flag[id] = 0;  // Não quero entrar na região crítica
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

