
# 1a. Avaliação

__Prof. Eduardo Ono__

&nbsp;

### Questão 1.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Uma linha de comando (comando no formato de texto) requer que sua execução seja realizada por um interpretador de comandos (ou _shell_), que por sua vez deve ser executado em um terminal.

&nbsp;

### Questão 2.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;A concorrência tem por objetivo a  multitarefa, ao passo que o paralelismo (além da multitarefa) tem como objetivo o ganho de desempenho. O paralelismo só ocorre na presença de duas ou mais unidades de processamento.

&nbsp;

### Questão 3.

```c
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    const int N = argc - 1;
    float v[N];
    float soma = 0, media, mediana;
    int metade;

    // Popula o vetor v com os argumentos armazenados de argv.
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
```

&nbsp;

### Questão 4.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Dependente do RA.

* Exemplos:

| RA | Saída do programa |
| --- | --- |
| 220012345 | 220054321 |
| 200153682 | 210086532 |

&nbsp;

### Questão 5.

```c
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <pthread.h>

void *numDivisores(void *p);

int main(int argc, char *argv[])
{
    int a, b;
    pthread_t t0, t1;

    // Validação da entrada
    if (argc != 3)
        return 1;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    if (a <= 0 || b <= 0)
        return 1;

    pthread_create(&t0, NULL, numDivisores, (void *)&a);
    pthread_create(&t1, NULL, numDivisores, (void *)&b);
    pthread_join(t0, NULL);
    pthread_join(t1, NULL);

    return 0;
}


void *numDivisores(void *p)
{
    int num = *(int *)p;
    int cont = 0; // Número de divisores

    for (int i = 1; i <= num; i++)
        if (num % i == 0)
            cont++;

    printf("Numero de divisores de %d = %d\n", num, cont);

    return NULL;
}
```

&nbsp;
