#include <stdio.h>

char* f1(char *hello)
{
    char local[] = "Teste";

    printf("From f1: %p\n", (void*)hello);
    hello[0] = 'X'; // Alteração do 'H' para 'X' no vetor hello da função main()
    printf("From f1: %s\n", local);

    return local;
}

int main()
{
    char hello[] = "Hello World";
    char *tmp;

    // printf("%c\n", *hello); // ERRADO!
    printf("%p\n", (void *)hello);
    tmp = f1(hello);
    printf("%s\n", hello); // Vetor alterado pela função f1
    tmp[0] = 'X';
    printf("%p\n", (void *)tmp);

    return 0;
}
