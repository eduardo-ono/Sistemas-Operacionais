/*
 * threads em linguagem C (padrão POSIX).
 * Programa que conta os pares de 1 até um número inteiro qualquer.
 *
 * Copyright(c) Eduardo Ono.
*/

#include <stdio.h>
#include <time.h>
#include <pthread.h>

// Variáveis globais
int pares = 0;

void* contarPares(void *p)
{
    int num = *((int*)p);
    int i;

    for (i = 1; i <= num; i++)
    {
        // Verifica se é par
        if (i % 2 == 0)
            pares++;
    }

    return NULL;
}

int main()
{
    int num1 = 50000;
    int num2 = 50000;
    clock_t now;
    double tempo;

    printf("\n--- Executando ---\n");

    now = clock();
    contarPares((void *)&num1);
    contarPares((void *)&num2);
    tempo = (double)(clock() - now) / CLOCKS_PER_SEC;

    printf("Pares = %d\n", pares);
    printf("Tempo = %.2f\n", tempo);

    printf("--- Fim do programa ---\n");

    return 0;
}
