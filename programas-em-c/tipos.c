#include <stdio.h>
#include <math.h>
#include <string.h>

int determinarIntervalo(int bytes, short sinalizado, char str[])
{
    float num_valores;
    long min, max;

    num_valores = pow(2, bytes * 8);
    if (sinalizado)
    {
        min = (long)(-num_valores/2);
        max = (long)(num_valores/2 -1);
    }
    else
    {
        min = 0;
        max = (long)(num_valores - 1);
    }
    sprintf(str, "%-15s %8d        %ld a %ld", str, bytes, min, max);

    return 0;
}

int main()
{
    char* tipos[] = {
        "char",
        "unsigned char",
        "short", // short int
        "unsigned short",
        "int",
        "unsigned", // unsigned int
        "long", // long int
        "unsigned long",
        "float",
        "double",
        "void"
    };
    char str[100];
    int i;

    printf("Tipo            Tamanho (bytes) Intervalo de valores\n");
    printf("--------------- --------------- --------------------\n");

    for (i = 0; i < 11; i++)
    {
        strcpy(str, "");
        strcpy(str, tipos[i]);
        if (strcmp(str, "char") == 0) {
            determinarIntervalo((int)sizeof (char), 1, str);
        }
        else if (strcmp(str, "unsigned char") == 0)
            determinarIntervalo((int)sizeof (unsigned char), 0, str);
        else if (strcmp(str, "short") == 0)
            determinarIntervalo((int)sizeof (short), 1, str);
        else if (strcmp(str, "unsigned short") == 0)
            determinarIntervalo((int)sizeof (unsigned short), 0, str);
        else if (strcmp(str, "int") == 0)
            determinarIntervalo((int)sizeof (int), 1, str);
        else if (strcmp(str, "unsigned") == 0)
            determinarIntervalo((int)sizeof (unsigned), 0, str);
        else if (strcmp(str, "long") == 0)
            determinarIntervalo((int)sizeof (long), 1, str);
        else if (strcmp(str, "unsigned long") == 0)
            determinarIntervalo((int)sizeof (unsigned long), 0, str);
        else if (strcmp(str, "float") == 0) {
            sprintf(str, "float \t\t ");
        }
        else if (strcmp(str, "double") == 0)
            sprintf(str, "double \t\t ");
        else if (strcmp(str, "void") == 0)
            sprintf(str, "void \t\t ");
        printf("%s\n", str);
    }

    return 0;
}
