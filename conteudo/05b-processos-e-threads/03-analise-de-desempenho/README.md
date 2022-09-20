### Sistemas Operacionais > Processos e Threads

# Análise de Desempenho

__Prof. Eduardo Ono__

&nbsp;

## Análise de Desempenho do uso de Threads

### Código para benchmark

```c
#include <time.h> // clock_t, CLOCKS_PER_SEC

double benchmark(int flag)
{
    static clock_t inicio = 0;
    clock_t fim;
    double tempo = 0;

    if (flag)
    {
        inicio = clock();
    }
    else
    {
        fim = clock();
        tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    }

    return tempo;
}
```

#### Mesmo código, porém mais reduzido:

```c
#include <time.h> // clock_t, CLOCKS_PER_SEC

double benchmark(int flag)
{
    static clock_t inicio = 0;

    return (flag) ? inicio = clock() : (double)(clock() - inicio) / CLOCKS_PER_SEC;
}
```

&nbsp;
