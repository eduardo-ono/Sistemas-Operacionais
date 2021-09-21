#include <stdio.h>
#include <time.h>
#include <pthread.h>

void* calcularDivisores(void* p)
{
    int *v = (int*)p;
    int id = v[0];
    int num = v[1];
    int divisor;

    for (divisor = 1; divisor <= num/2; divisor++)
    {
        if (num % divisor == 0)
        {
            if (id == 0)
                printf("%d\n", divisor);
            else if (id == 1)
                printf("\t\t%d\n", divisor);
        }
    }
    printf("\n");

    return NULL;
}

int main()
{
    int num1[] = { 0, 2000000001 };
    int num2[] = { 1, 2000000000 };
    pthread_t t0, t1;
    clock_t now;
    double tempo;

    now = clock();
    pthread_create(&t0, NULL, calcularDivisores, (void*)num1);
    pthread_create(&t1, NULL, calcularDivisores, (void*)num2);

    pthread_join(t0, NULL);
    pthread_join(t1, NULL);
    tempo = (double)(clock() - now) / CLOCKS_PER_SEC;

    printf("Tempo de execucao = %.2f\n", tempo);

    return 0;
}
