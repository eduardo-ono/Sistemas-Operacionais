#include <stdio.h>

int main()
{
    int ch;

    printf("TABELA ASCII ESTENDIDA (8-bit)\n");
    printf("------------------------------\n");
    for (ch = 32; ch < 256; ch++)
    {
        if (ch % 32 == 0)
        {
            printf("\n%3d  ", ch);
        }
        printf("%c ", ch);
    }

    printf("\n\n");
    printf("Exemplos:\n");
    printf("CASA\n");
    printf("%s\n", "CASA");
    printf("%c%c%c%c\n", 'C', 'A', 'S', 'A');
    printf("%c%c%c%c\n", 67, 65, 83, 65);

    return 0;
}
