/*
Programa      : threads-funcao-padrao-posix.c
Versão        : 
Descrição     : 
Desenvolvedor : Eduardo Ono
Criado em     : 05/09/2022
Atualizado em : 
Comentários   : Não utiliza threads.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Protótipos das funções.
void *f1(void *p);
void *f2(void *p);

int main()
{
    int num1 = 1, num2 = 2;

    f1((void *)&num1);
    f2((void *)&num2);

    return 0;
}

void *f1(void *p)
{
    int *pInt = (int *)p;
    int num = *(pInt);

    for (int i = 0; i < 500; i++)
        printf("%d  ", num);
    printf("\n");

    return NULL;
}

void *f2(void *p)
{
    int *pInt = (int *)p;
    int num = *(pInt);

    for (int i = 0; i < 500; i++)
        printf("%d  ", num);
    printf("\n");

    return NULL;
}
