#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <pthread.h>

typedef struct
{
    int length;
    int v[7];
    int menor_elemento;
} Estrutura;

// Protótipos no padrão POSIX para threads.
void *menorElemento(void *p);

int main()
{
    // Inicializa uma instância da estrutura
    Estrutura objeto = {
        length : 7,
        v : {10, 18, 15, 23, 5, 90, 12},
    };

    menorElemento((void *)&objeto);
    printf("Menor elemento = %d\n", objeto.menor_elemento);

    return 0;
}

// Função que determina o menor elemento de um vetor.
void *menorElemento(void *p)
{
    Estrutura *pObjeto = (Estrutura *)p;
    Estrutura objeto = *pObjeto;
    int indice_menor_elemento = 0;

    for (int i = 1; i < objeto.length; i++)
        if (objeto.v[i] < objeto.v[indice_menor_elemento])
            indice_menor_elemento = i;

    // Altera o conteúdo do campo "menor_elemento" do objeto apontado por pObjeto.
    // OBS.: O objeto apontado por pObjeto foi instanciado na função main().
    (*pObjeto).menor_elemento = objeto.v[indice_menor_elemento];
    // ou
    // pObjeto->menor_elemento = objeto.v[indice_menor_elemento];

    return NULL;
}
