#include <stdio.h>

int main()
{
    int a, b, soma;

    // Entrada
    printf("Paçoca - Programa que soma dois números inteiros\n\n");
    printf("Entre com o primeiro número: ");
    scanf("%d", &a);
    printf("Entre com o segundo número: ");
    scanf("%d", &b);

    // Processamento
    soma = a + b;

    // Saída
    printf("%d\n", soma);

    return 0;
}
