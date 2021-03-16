#include <stdio.h>

char* f1(char *hello)
{
    char local[] = "Teste";

    printf("From f1: %p\n", (void *)hello);
    hello[0] = 'X';
    printf("From f1: %s\n", local);

    return local;
}

int main()
{
    char hello[] = "Hello World";
    char *tmp;

    printf("%p\n", (void *)hello);
    printf("%p\n", (void *)&hello[0]);
    printf("%c\n", *hello);
    tmp = f1(hello);
    tmp[0] = 'X';
    printf("%p\n", (void *)tmp);

    return 0;
}
