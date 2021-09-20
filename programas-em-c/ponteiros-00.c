#include <stdio.h>

int main()
{
    // Cria uma variável x do tipo int (4 bytes) na memória.
    // Um espaço de 4 bytes é alocado pelo S.O. na memória.
    // A variável x contém "lixo".
    int x;

    // Cria uma variável ponteiro px (8 bytes) na memória.
    // Um espaço de 8 bytes é alocado, cujo endereço pode ser acessado por &px.
    // O ponteiro px contém "lixo".
    int *px;

    // Fazendo o ponteiro px "apontar" para a varíável x:
    // O endereço da variável x é atribuído ao ponteiro px.
    px = &x; // O ponteiro px recebe o endereço da variável x.

    // Agora, há duas maneiras para acessar o conteúdo da variável x:

    // 1. Acesso direto pela própria variável x:
    x = 10;
    printf("Valor da variavel x = %d\n", x); // 10

    // 2 . Acesso indireto pelo ponteiro px:
    *px = 20;
    printf("Valor da variavel x = %d\n", x); // 20

    return 0;
}
