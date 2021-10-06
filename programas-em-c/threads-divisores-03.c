/*
    Programa que calcula os divisores de um inteiro usando threads.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>

// A função retorna o endereço de um vetor com os divisores.
void* calcularDivisores(void* p)
{
    long num = *(long*)p;
    long divisor;
    long *divisores = (long*) malloc(3 * sizeof (long));
    long *divisoresRealocado;

    divisores[0] = 2; // Número mínimo de divisores: 1 e o próprio número
    divisores[1] = 1;
    for (divisor = 2; divisor <= num/2; divisor++)
    {
        if (num % divisor == 0)
        {
            divisores[divisores[0]] = divisor;
            ++divisores[0];
            divisoresRealocado = divisores;
            divisoresRealocado = realloc(divisoresRealocado, (divisoresRealocado[0] + 1) * sizeof (long));
            if (divisoresRealocado != NULL)
                divisores = divisoresRealocado;
        }
    }
    divisores[divisores[0]] = num;

    return (void*)divisores;
}

int imprimirDivisores(long divisores[])
{
    long i;

    for (i = 1; i <= divisores[0]; i++)
        printf("%ld  ", divisores[i]);
    printf("\n\n");

    return 0;
}

int main()
{
    long num1 = 10123456789;
    long num2 = 100;
    pthread_t t0, t1;
    long *divisores0, *divisores1;
    clock_t now;
    double tempo;

    printf("\nCalculando...");
    now = clock();
    pthread_create(&t0, NULL, calcularDivisores, (void*)&num1);
    pthread_create(&t1, NULL, calcularDivisores, (void*)&num2);

    pthread_join(t0, (void*)&divisores0);
    pthread_join(t1, (void*)&divisores1);
    tempo = (double)(clock() - now) / CLOCKS_PER_SEC;

    printf("\r");
    imprimirDivisores(divisores0);
    imprimirDivisores(divisores1);
    free(divisores0);
    free(divisores1);
    printf("Tempo de execucao = %.2f\n", tempo);

    return 0;
}
