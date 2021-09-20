#include <windows.h>

int main()
{
    int c;

    for (c = 32; c < 256; c++)
        printf("%c ", c);

    printf("\n");
    printf("CASA\n");
    printf("%s\n", "CASA");
    printf("%c%c%c%c\n", 'C', 'A', 'S', 'A');
    printf("%c%c%c%c\n", 67, 65, 83, 65);

    system("copy ascii-00.c banana.c");

    return 0;
}
