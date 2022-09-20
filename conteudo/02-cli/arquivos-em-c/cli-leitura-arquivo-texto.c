#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *file_handle;
    char buffer[2049];
    char filename[256];

    if (argc == 2)
        strcpy(filename, argv[1]);
    else
        return 1;

    file_handle = fopen(filename, "r");
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
    getchar();
}
