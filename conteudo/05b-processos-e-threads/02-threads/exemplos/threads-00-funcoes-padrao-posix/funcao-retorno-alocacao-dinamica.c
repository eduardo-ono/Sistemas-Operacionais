/*
    Programa      : funcao-retorno-alocacao-dinamica.c
    Versão        :
    Descrição     : Função que converte uma temperatura em graus fahrenheit para graus Celsius.
    Desenvolvedor : Eduardo Ono
    Criado em     : 13/09/2022
    Atualizado em : 13/09/2022
    Comentários   : Não utiliza threads.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Protótipo da função.
void *fahrenheitParaCelsius(void *p);

int main()
{
    float tf = 100.0; // Temperatura em graus fahrenheit
    float *tc;        // Ponteiro para um variável do tipo float que armazenará a temperatura em graus Celsius

    tc = (float *)fahrenheitParaCelsius((void *)&tf);

    printf("%.1f oF --> %.1f oC\n", tf, *tc);

    // Desaloca da memória a variável dinâmica.
    free(tc);

    return 0;
}

// Função no padrão POSIX para o uso de threads.
// Converte graus Fahrenheit em graus Celsius.
void *fahrenheitParaCelsius(void *p)
{
    float *pFloat = (float *)p;
    float tf = *pFloat;
    float *tc;

    // Alocação dinâmica de uma variável do tipo float na memória "heap".
    tc = (float *)malloc(sizeof(float));

    *tc = 5.0 / 9 * (tf - 32);

    return (void *)tc;
}
