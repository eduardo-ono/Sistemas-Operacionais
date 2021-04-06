// Algoritmo de Peterson para solução de exclusão mútua de duas threads
//
// Copyright(c) 2020, Eduardo Ono.

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <conio.h>

// Variáveis globais
int _valor;

int flag[2] = { 0, 0 };  // flag é um vetor de booleanos
int turno = 0;  // variável booleana; turno significa "vez"

void* f( void *p )
{
	int id = *((int*)p);
	int i;
	
	for ( i = 0; i < 10; i++ )
	{
		// Algoritmo de Peterson
		flag[id] = 1;  // Quero entrar na Região Crítica
		printf("%d: flag = %d %d \n", id, flag[0], flag[1]);
		turno = 1 - id;  // Passo a vez para a outra thread
		printf("%d: turno = %d\n", id, turno);
		// Enquanto a outra thread quiser entrar e não for minha vez, aguardo...
		while ( flag[1-id] == 1 && turno != id )
		;
	
		// Início da Região Crítica
		_valor = id;
		if ( id == 1 ) printf( "\t\t" );
		printf( "ID: %d\t %d\n", id, _valor );
		// Fim da Região Crítica
		flag[id] = 0;  // Não quero entrar na Região Crítica
		printf("%d: flag fim = %d %d \n", id, flag[0], flag[1]);
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
