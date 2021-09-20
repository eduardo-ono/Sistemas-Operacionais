#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int a, b, soma = 0;

    // Entrada
    printf("Programa que soma dois números inteiros\n\n");
    if (argc != 3)
    {
        printf("Entre com o primeiro número: ");
        scanf("%d", &a);
        printf("Entre com o segundo número: ");
        scanf("%d", &b);
    }
    else
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
    }

    // Processamento
    soma = a + b;

    // Saída
    printf("%d\n", soma);

    return 0;
}
