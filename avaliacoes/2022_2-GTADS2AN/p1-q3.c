/*
    Programa      : 
    Versão        : 
    Descrição     : 
    Desenvolvedor : Eduardo Ono
    Criado em     : 
    Atualizado em : 
    Comentários   : 
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    const int N = argc - 1;
    float v[N];
    float soma = 0, media, mediana;
    int metade;

    if (N == 0)
    {
        printf("Argumentos invalidos!\n");
        return 1;
    }

    // Popula o vetor v com os argumentos armazenados em argv.
    for (int i = 0; i < N; i++)
        v[i] = atof(argv[i + 1]);

    // Cálculo da média.
    for (int i = 0; i < N; i++)
        soma += v[i];
    media = soma / N;

    // Ordenação do vetor.
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1, aux; j < N; j++)
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
    
    // Cálculo da mediana.
    metade = N / 2;
    // Caso N seja par.
    if (N % 2 == 0)
        mediana = (v[metade - 1] + v[metade]) / 2.0;
    else // N ímpar
        mediana = v[metade];
    
    printf("Media = %f\n", media);
    printf("Mediana = %f\n", mediana);

    return 0;
}
