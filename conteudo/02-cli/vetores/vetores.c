/*
Programa      : 
Versão        : 
Descrição     : 
Desenvolvedor : Eduardo Ono
Criado em     : 29/08/2022
Atualizado em : 
Comentários   : 
*/

#include "vetores.h"

void imprimirVetor(int v[], const int N)
{
    for (int i = 0; i < N; i++)
        printf("%d  ", v[i]);
    printf("\n");
}

int menorElemento(int v[], const int N)
{
    int menor = v[0];
    for (int i = 1; i < N; i++)    
        if (v[i] < menor)
            menor = v[i];
    
    return menor;
}

int maiorElemento(int v[], const int N)
{
    int maior = v[0];
    for (int i = 1; i < N; i++)    
        if (v[i] > maior)
            maior = v[i];
    
    return maior;
}
