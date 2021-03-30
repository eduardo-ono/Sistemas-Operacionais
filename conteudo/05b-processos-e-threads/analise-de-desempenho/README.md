### Sistemas Operacionais > Processos e Threads

# Análise de Desempenho

Prof. Eduardo Ono

<br>

## Análise de Desempenho em Threads

### Medindo o ganho de desempenho com paralelismo em C

```c
#include <time.h> // clock_t

clock_t inicio, fim;
double tempo;

inicio = clock();
/*
  Código a ser mensurado aqui.
*/
fim = clock();
tempo = ((double)(fim - inicio) / CLOCKS_PER_SECOND;
```

<br>
