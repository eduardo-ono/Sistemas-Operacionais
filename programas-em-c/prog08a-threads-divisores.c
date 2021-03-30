/*
 * Análise de desempenho utilizando threads em linguagem C (padrão POSIX).
 * Programa (não otimizado) que determina todos os divisores de um inteiro.
 * N = 0
 *
 * Copyright(c) Eduardo Ono.
*/

#include <stdio.h>
#include <time.h> // clock_t, clock()

void* divisores(void *p)
{
	long *v = (long*)p;
	long id = v[0]; // long id = *v;
	long num = v[1]; // long num = *(v+1);
	long divisor;

	for ( divisor = 1; divisor <= num; divisor++ )
		if ( num % divisor == 0 )
			switch ( id ) {
				case 0: printf( "%ld\n", divisor ); break;
				case 1: printf( "\t\t%ld\n", divisor ); break;
				case 2: printf( "\t\t\t\t%ld\n", divisor ); break;
				case 3: printf( "\t\t\t\t\t\t%ld\n", divisor ); break;
			}
	
	return NULL;
}

int main()
{
	clock_t inicio, fim;
	double tempo;

	long v0[] = { 0, 1700012341 };
	long v1[] = { 1, 1700012342 };
	long v2[] = { 2, 1700012343 };
	long v3[] = { 3, 1700012344 };

	inicio = clock();
	divisores((void*)v0);  // v0 == &v[0]
	divisores((void*)v1);
	divisores((void*)v2);
	divisores((void*)v3);
	fim = clock();
	tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
	printf("Tempo decorrido: %lf\n", tempo);
	
	return 0;
}
