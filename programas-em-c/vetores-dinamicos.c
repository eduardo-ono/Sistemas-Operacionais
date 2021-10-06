#include <stdio.h>
#include <stdlib.h>

long* determinarDivisores(long num)
{
    long divisor;
    long *divisores, *aux;

    divisores = (long *)malloc(1 * sizeof (long));
    if (divisores == NULL) return NULL;

    for (divisor = 1; divisor <= num; divisor++)
        if (num % divisor == 0)
        {
            aux = (divisores)realloc(divisores)
        }

    return NULL;
}

int main()
{


    return 0;
}
