// Algoritmo de Peterson para solução de exclusão mútua de duas threads
//
// Copyright(c) 2020, Eduardo Ono.

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
// #include <conio.h>

// Variáveis globais
int flag[] = { 0, 0 };  // flag é um vetor de booleanos
int turno = 0;  // variável booleana; turno significa "vez"

void* f0( void *p )
{
    int i;

    for (i = 0; i < 20; i++)
    {
        // Algoritmo de Peterson
        flag[0] = 1; // Tem interesse em entrar na Região Crítica
        turno = 1; // Passa a vez para a outra thread
        while (flag[1] == 1 && turno == 1) ; // Se for a vez do outro, aguarda...

        // Região Crítica: Saída padrão
        printf("O");
        printf("l");
        printf("á");
        printf(" ");
        // Fim da Região Crítica

        flag[0] = 0; // Não tem interesse em entrar na Região Crítica
    }

    return NULL;
}

void* f1(void *p)
{
   int i;

    for (i = 0; i < 20; i++)
    {
        // Algoritmo de Peterson
        flag[1] = 1; // Tem interesse em entrar na Região Crítica
        turno = 0; // Passa a vez para a outra thread
        while (flag[0] == 1 && turno == 0) ;

        // Região Crítica: Saída padrão
        printf("m");
        printf("u");
        printf("n");
        printf("d");
        printf("o");
        printf("!");
        printf("\n");
        // Fim da Região Crítica

        flag[1] = 0; // Não tem interesse em entrar na Região Crítica
    }

    return NULL;
}

int main()
{
	pthread_t t1, t2;

	printf("main --> Executando...\n\n");
	pthread_create(&t1, NULL, f0, NULL);
	pthread_create(&t2, NULL, f1, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	
	return 0;
}
