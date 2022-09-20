/*
    Programa      : lista01-e1.c
    Versão        : 
    Descrição     : 
    Desenvolvedor : Eduardo Ono
    Criado em     : 20/09/2022
    Atualizado em : 20/09/2022
    Comentários   : 
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool verificarPrimo(int num);
void imprimirVetorInt(int v[], const int N);

int main()
{
    const int N = 10000;
    int primos[N];
    int num = 1;

    for (int i = 0; i < N; i++)
    {
        while (!verificarPrimo(num))
            num++;
        primos[i] = num++;
    }
    imprimirVetorInt(primos, N);

    return 0;
}

bool verificarPrimo(int num)
{
    if (num < 2) return false;
    for (int divisor = 2; divisor <= num / 2; divisor++)
        if (num % divisor == 0)
            return false;

    return true;
}

void imprimirVetorInt(int v[], const int N)
{
    int n = 10;

    if (N > 100)
    {
        for (int i = 0; i < n; i++)
            printf("%d  ", v[i]);
        printf("...  ");
    }
    else
        n = N;
    for (int i = N - n; i < N; i++)
        printf("%d  ", v[i]);
    printf("\n\n");
}
