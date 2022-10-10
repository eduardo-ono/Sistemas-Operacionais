/*
    Programa      : P1-Q5.c
    Versão        : 
    Descrição     : 
    Desenvolvedor : Eduardo Ono
    Criado em     : 27/09/2022
    Atualizado em : 27/09/2022
    Comentários   : 
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <pthread.h>

void *numDivisores(void *p);

int main(int argc, char *argv[])
{
    int a, b;
    pthread_t t0, t1;

    // Validação da entrada
    if (argc != 3)
        return 1;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    if (a <= 0 || b <= 0)
        return 1;

    pthread_create(&t0, NULL, numDivisores, (void *)&a);
    pthread_create(&t1, NULL, numDivisores, (void *)&b);
    pthread_join(t0, NULL);
    pthread_join(t1, NULL);

    return 0;
}


void *numDivisores(void *p)
{
    int num = *(int *)p;
    int cont = 0; // Número de divisores

    for (int i = 1; i <= num; i++)
        if (num % i == 0)
            cont++;

    printf("Numero de divisores de %d = %d\n", num, cont);

    return NULL;
}
