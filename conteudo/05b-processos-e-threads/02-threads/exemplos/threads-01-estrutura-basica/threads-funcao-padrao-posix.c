/*
    Programa      : threads-01-estrutura-basica.c
    Versão        : 
    Descrição     : 
    Desenvolvedor : Eduardo Ono
    Criado em     : 05/09/2022
    Atualizado em : 11/09/2022
    Comentários   :
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <pthread.h>

// Protótipos das funções.
void *f1(void *p);
void *f2(void *p);

int main()
{
    int num1 = 1, num2 = 2;
    pthread_t t0, t1;

    // Cria e "dispara" as threads.
    pthread_create(&t0, NULL, f1, (void *)&num1);
    pthread_create(&t1, NULL, f2, (void *)&num2);

    // Aguarda o término das threads.
    pthread_join(t0, NULL);
    pthread_join(t1, NULL);

    return 0;
}

void *f1(void *p)
{
    int *pInt = (int *)p;
    int num = *(pInt);

    for (int i = 0; i < 200; i++)
        printf("%d  ", num);
    printf("\n");

    return NULL;
}

void *f2(void *p)
{
    int *pInt = (int *)p;
    int num = *(pInt);

    for (int i = 0; i < 200; i++)
        printf("%d  ", num);
    printf("\n");

    return NULL;
}
