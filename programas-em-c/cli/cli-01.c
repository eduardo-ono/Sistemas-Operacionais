#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int a, b, soma = 0;

    // Processamento
    if (argc == 3)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        soma = a + b;
    }

    // Saída
    printf("%d\n", soma);

    return 0;
}
