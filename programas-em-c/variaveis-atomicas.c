/*
 * Variáveis Atômicas utilizando threads em linguagem C (padrão POSIX).
 *
 * Copyright(c) Eduardo Ono.
*/

#include <stdio.h>
#include <pthread.h>

void* f(void *arg)
{
    int *p = (int*)arg; // p aponta para a variável id da função main()
	int id = *((int*)arg);

    printf("%d\n", id);
    *p = 100;

	return NULL;
}

int main()
{
    int id;
	pthread_t t0, t1;

    id = 0;
	pthread_create(&t0, NULL, f, (void*)&id);
    id = 1;
	pthread_create(&t1, NULL, f, (void*)&id);

    pthread_join(t0, NULL);
    pthread_join(t1, NULL);
	printf("\n");

	return 0;
}
