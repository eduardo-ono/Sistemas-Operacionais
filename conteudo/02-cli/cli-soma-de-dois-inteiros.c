/*
Programa      : cli-soma-de-dois-inteiros.c
Versão        : 
Descrição     : Soma dois números inteiros passados pela linha de comando.
Desenvolvedor : Eduardo Ono
Criado em     : 22/07/2022
Atualizado em : 29/07/2022
Comentários   :
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char version[] = "v1.0";
    int a, b, soma;

    if (argc == 2 && strcmp(argv[1], "--version"))
    {
        printf("%s\n", version);
        return 0;
    }
    if (argc == 1 || (argc == 2 && (strcmp(argv[1], "--help") || strcmp(argv[1], "/?"))))
    {
        printf("Uso: prog_name num1 num2\n");
        return 1;
    }
    if (argc == 3)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        soma = a + b;
        printf("soma = %d\n", soma);
    }

    return 0;
}

