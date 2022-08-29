/*
Programa      : matriz-de-strings.c
Versão        :
Descrição     :
Desenvolvedor : Eduardo Ono
Criado em     : 22/08/2022
Atualizado em : 29/08/2022
Comentários   :
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nomes[3][31];
    char cores[][21] = {"azul", "verde", "amarelo"};
    char *frutas[] = {"abacaxi", "caju", "morango", "banana"};

    // nomes
    strcpy(nomes[0], "Fulano");
    strcpy(nomes[1], "Ciclano");
    strcpy(nomes[2], "Beltrano");
    for (int i = 0; i < 3; i++)
        printf("%s  ", nomes[i]);
    printf("\n");
    strcpy(nomes[2], "Mengano");
    for (int i = 0; i < 3; i++)
        printf("%s  ", nomes[i]);
    printf("\n");

    // cores
    strcpy(cores[0], "ciano");
    for (int i = 0; i < 3; i++)
        printf("%s  ", cores[i]);
    printf("\n");

    // frutas
    strcpy(frutas[1], "amora"); // ERRO!
    for (int i = 0; i < 3; i++)
        printf("%s  ", frutas[i]);
    printf("\n");

    return 0;
}
