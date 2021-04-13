/*
 * Tendência de um número aleatório ser par ou ímpar utilizando threads (padrão POSIX).
 *
 * Copyright(c) Eduardo Ono.
*/

#include <stdio.h>
#include <stdlib.h> // rsnd(), srand()
#include <time.h> // time()
#include <pthread.h>
#include <semaphore.h>

sem_t trava[4];

void* f(void *arg)
{
    int id = *((int*)arg);
	int i;

	for (i = 0; i < 1000; i++)
	{
        switch (id) {
            case 0:
                sem_wait(&trava[0]);
                printf("\t");
                printf("%d\n", id);
                sem_post(&trava[1]);
                break;
            case 1:
                sem_wait(&trava[1]);
                printf("\t\t");
                printf("%d\n", id);
                sem_post(&trava[2]);
                break;
            case 2:
                sem_wait(&trava[2]);
                printf("\t\t\t");
                printf("%d\n", id);
                sem_post(&trava[3]);
                break;
            case 3:
                sem_wait(&trava[3]);
                printf("\t\t\t\t");
                printf("%d\n", id);
                sem_post(&trava[0]);
        }
    }

	return NULL;
}

int main()
{
    int id[] = { 0, 1, 2, 3 };
	pthread_t t[4];
	int i;

	printf("--- Executando ---\n");
	sem_init(&trava[0], 0, 1);
	sem_init(&trava[1], 0, 0);
    sem_init(&trava[2], 0, 0);
    sem_init(&trava[3], 0, 0);

	for (i = 0; i < 4; i++)
	{
		pthread_create(&t[i], NULL, f, (void*)&id[i]);
	}

	for (i = 0; i < 4; i++)
	{
		pthread_join(t[i], NULL);
	}	

	for (i = 0; i < 4; i++)
	    sem_destroy(&trava[i]);

	printf("--- Fim do Programa ---\n");
	
	return 0;
}
