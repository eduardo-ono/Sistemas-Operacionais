/*
    Programa      : threads-divisores-v0.c
    Versão        : 
    Descrição     : 
    Desenvolvedor : Eduardo Ono
    Criado em     : 12/09/2022
    Atualizado em : 12/09/2022
    Comentários   : Não utiliza threads.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int determinarDivisores(long long int num, long long int v[], const int N);
void imprimirVetor(long long int v[], const int N);

int main()
{
    const int N = 1000;
    long long int divisores_num1[N];
    long long int divisores_num2[N];
    int n;
    long long int num1 = 12345678901;
    long long int num2 = 12345678902;

    n = determinarDivisores(num1, divisores_num1, N);
    imprimirVetor(divisores_num1, n);
    n = determinarDivisores(num2, divisores_num2, N);
    imprimirVetor(divisores_num2, n);

    return 0;
}

int determinarDivisores(long long int num, long long int v[], const int N)
{
    int i = 0;

    for (long long int divisor = 1; divisor <= num / 2 && i < N; divisor++)
    {
        if (divisor % 1000000000 == 0)
            printf("divisor = %lld\n", divisor);
        if (num % divisor == 0)
        {
            v[i] = divisor;
            i++;
            printf("\t\t\t\tNumero de divisores = %d\r", i);
        }
    }
    v[i] = num;
    i++;
    printf("\nNumero de divisores = %d\n", i);

    return i;
}

void imprimirVetor(long long int v[], const int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%lld  ", v[i]);
    }
    printf("\n");
}
