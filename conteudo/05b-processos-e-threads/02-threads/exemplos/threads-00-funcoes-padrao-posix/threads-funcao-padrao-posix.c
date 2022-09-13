/*
Programa      : funcao-padrao-posix-00.c
Versão        : 
Descrição     : Função que imprime 100 vezes um número inteiro.
Desenvolvedor : Eduardo Ono
Criado em     : 05/09/2022
Atualizado em : 
Comentários   : Não utiliza threads.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Protótipos da funções.
void *f(void *p);

int main()
{
    int numero = 10;

    f((void *)&numero);

    return 0;
}

// Função no padrão POSIX para o uso de threads.
void *f(void *p)
{
    int *pInt = (int *)p; // pInt "aponta" para a variável inteira numero
    int num = *(pInt); // num recebe 10, o valor da variável apontada por pInt

    for (int i = 0; i < 100; i++)
        printf("%d  ", num);
    printf("\n");

    return NULL;
}
