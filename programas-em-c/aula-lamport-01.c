// Algoritmo da Padaria (Lamport) para solução de exclusão mútua para "N" threads
//
// Copyright(c) 2020, Eduardo Ono.

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 3

// Lamport
void lock(int);
void unlock(int);

// Variáveis globais
int flag[NUM_THREADS] = { 0 };  // vetor de booleanos que sinaliza o interesse de uma thread em entrar na Região Crítica
int turno[NUM_THREADS] = { 0 };  // vetor de booleanos; turno significa "vez"

void* f0( void *p )
{
	int id = *((int*)p);
	int i, j;

	for (i = 0; i < 20; i++)
	{
		lock(id); // Lamport
		// Região Crítica: Saída padrão
		printf("O");
		printf("l");
		for (j = 0; j < 100000; j++) ;
		printf("á");
		printf(" ");
		// Fim da Região Crítica
		unlock(id); // Lamport
	}

	return NULL;
}

void* f1(void *p)
{
	int id = 1;
	int i, j;

	for (i = 0; i < 20; i++)
	{
		lock(id); // Lamport
		// Região Crítica: Saída padrão
		printf("m");
		printf("u");
		printf("n");
		printf("d");
		for (j = 0; j < 1000000; j++) ;
		printf("o");
		printf("!");
		printf("\n");
		// Fim da Região Crítica
		unlock(id); // Lamport
	}

	return NULL;
}

int main()
{
	pthread_t t1, t2, t3;
	int id0 = 0, id1 = 1, id2 = 2;

	printf("main --> Executando...\n\n");
	pthread_create(&t1, NULL, f0, (void*)&id0);
	pthread_create(&t2, NULL, f1, NULL);
	pthread_create(&t3, NULL, f0, (void*)&id2);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	pthread_join(t3, NULL);
	
	return 0;
}

// Lamport
void lock(int id) // id é o identificador da thread (0, 1, 2, 3, ...)
{
	int max, i;
	flag[id] = 1;
	// Determina o maior turno
	max = turno[0];
	for (i = 0; i < NUM_THREADS; i++)
	{
		if (turno[i] > max)
			max = turno[i];
	}
	turno[id] = max + 1;
	flag[id] = 0;
	for (i = 0; i < NUM_THREADS; i++)
	{
		if (i != id)
		{
			while (flag[i] == 1) ; // Aguarda as outras threads receberem uma senha
			while (turno[i] != 0 && (turno[i] < turno[id] || (turno[i] == turno[id] && i < id))); 
		}
	}
}

void unlock(int id)
{
  turno[id] = 0;
}
