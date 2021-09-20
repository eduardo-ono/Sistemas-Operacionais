#include <stdio.h>
#include <pthread.h>

void* calcularDivisores1(void* p)
{
    int num = *((int*)p);
    int divisor;

    printf("Divisores de %d\n", num);
    for (divisor = 1; divisor <= num; divisor++)
    {
        if (num % divisor == 0)
            printf("%d\n", divisor);
    }
    printf("\n");

    return NULL;
}

void* calcularDivisores2(void* p)
{
    int num = *((int*)p);
    int divisor;

    printf("Divisores de %d\n", num);
    for (divisor = 1; divisor <= num; divisor++)
    {
        if (num % divisor == 0)
            printf("\t\t%d\n", divisor);
    }
    printf("\n");

    return NULL;
}

int main()
{
    int num1 = 2000000001, num2 = 2000000000;
    pthread_t t0, t1;

    pthread_create(&t0, NULL, calcularDivisores1, (void*)&num1);
    pthread_create(&t1, NULL, calcularDivisores2, (void*)&num2);

    pthread_join(t0, NULL);
    pthread_join(t1, NULL);

    return 0;
}
