### Sistemas Operacionais > Processos e Threads

# Análise de Desempenho

__Prof. Eduardo Ono__

&nbsp;

## Análise de Desempenho em Threads

### Medindo o ganho de desempenho com paralelismo em C

```c
#include <time.h> // clock_t, CLOCKS_PER_SEC

double benchmark(int flag)
{
    static clock_t inicio;
    clock_t fim;
    double tempo = 0;

    if (flag)
        inicio = clock();
    else
        fim = clock();
    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    return tempo;
}
```

&nbsp;
