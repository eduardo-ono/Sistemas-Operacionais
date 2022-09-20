/*
    Programa      : lista03-e2.c
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
#include <string.h>

int main()
{
    char defaultFilename[] = "lista03-e1-teste.txt";
    char filename[256];
    FILE *arquivo;
    char buffer[2048], palavras[2048], palavra[512];

    printf("Entre com o nome do arquivo: ");
    gets(filename);
    if (strcmp(filename, "") == 0)
        strcpy(filename, defaultFilename);

    printf("Abrindo %s...", filename);
    arquivo = fopen(filename, "r");
    printf("\n");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    while (!feof(arquivo))
    {
        strcpy(buffer, "");
        fgets(buffer, sizeof(buffer), arquivo);
        for (int i = 0, j; i < strlen(buffer) - 1; i++)
        {
            if ((buffer[i] == 'a' || buffer[i] == 'A') && (i == 0 || buffer[i - 1] == ' '))
            {
                strcpy(palavra, "");
                for (j = i; buffer[j] != ' ' && buffer[j] != ',' && j < strlen(buffer); j++)
                {
                    strncat(palavra, &buffer[j], 1);
                }
                printf("%s\n", palavra);
                i = j - 1;
            }
            strcat(palavras, palavra);
        }
    }
    fclose(arquivo);

    return 0;
}
