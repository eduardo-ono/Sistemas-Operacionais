/*
Programa      : gravacao-arquivo-texto.c
Versão        : 
Descrição     : 
Desenvolvedor : Eduardo Ono
Criado em     : 29/08/2022
Atualizado em : 
Comentários   : 
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char filename[128];
    FILE *file_handle;
    char buffer[256];

    printf("Entre com o nome do arquivo: ");
    gets(filename);
    file_handle = fopen(filename, "w");
    if (file_handle == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (float x = 0; x < 50; x++)
    {
        sprintf(buffer, "%.3f\t%f\n", x, sqrt(x));
        // Imprime na tela
        fputs(buffer, stdout);
        //Imprime no arquivo
        fputs(buffer, file_handle);
    }
    // Fecha o arquivo
    fclose(file_handle);

    return 0;
}
