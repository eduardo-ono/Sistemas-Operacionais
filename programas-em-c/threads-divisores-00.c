#include <stdio.h>
#include <time.h> // clock()

int calcularDivisores(int num)
{
    int divisor;

    for (divisor = 1; divisor <= num; divisor++)
    {
        if (num % divisor == 0)
            printf("%d\n", divisor);
    }
    printf("\n");

    return 0;
}

int main()
{
    int num1 = 2000000001, num2 = 2000000000;
    clock_t now;
    double tempo;
    
    now = clock();
    calcularDivisores(num1);
    calcularDivisores(num2);
    tempo = (double)(clock() - now) / CLOCKS_PER_SEC;
    printf("Tempo de execucao = %.2f\n", tempo);

    return 0;
}
