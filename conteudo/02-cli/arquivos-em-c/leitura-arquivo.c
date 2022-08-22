#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main( )
{
    FILE *file_handle;
    char buffer[1024];

    file_handle = fopen("ARQUIVO.TXT", "r");
    if (file_handle == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    while (!feof(file_handle))
    {
        strcpy(buffer, "");
        fgets(buffer, sizeof(buffer), file_handle);
        printf("%s", buffer);
    }
    fclose(file_handle);
}
