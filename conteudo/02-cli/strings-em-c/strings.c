/*
Programa      : strings.c
Versão        :
Descrição     :
Desenvolvedor : Eduardo Ono
Criado em     : 22/08/2022
Atualizado em : 22/08/2022
Comentários   :
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char frutas[][31] = {"caju", "banana", "abacaxi", "morango"};

    for (int i = 0; i < 4; i++)
        printf("%s\n", frutas[i]);

    frutas[0][0] = toupper(frutas[0][0]);
    printf("%s\n", frutas[0]);
    printf("Tamanho de %s = %d\n", frutas[0], (int)strlen(frutas[0]));

    return 0;
}
