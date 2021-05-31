> ### Sistemas Operacionais > Conteúdo > [Escalonamento de Processos](../escalonamento-de-processos/README.md)

# Round-Robin (Turno Rotativo ou Circular)

Prof. Eduardo Ono

<br>

## Referências

* [[TANENBAUM-4e_2016]] Cap. 2, pp. 109-110.

<br>

## Características

* Classificação: Preemptivo
* A lista de processos é implementada como uma fila circular.
* Quantum: tempo máximo no qual um processo pode utilizar a CPU ininterruptamente. Tem por objetivo evitar o monopólio da CPU por um único processo.

<br>

## Exemplos

<br>

## Vídeos de Apoio

|| Descrição |
| :-: | --- |
| [![](https://img.youtube.com/vi/MWbPgxOCrFk/default.jpg)](https://www.youtube.com/watch?v=MWbPgxOCrFk "") | [UNIVESP] <br> [**Sistemas Operacionais – Aula 06 - Escalonamento de Processo**](https://www.youtube.com/watch?v=MWbPgxOCrFk) \|\| 25:52, YouTube, Mai/2017.

<br>

## Exercícios Resolvidos

1. [ENADE-2019_Eng-Computação (adaptado)] Suponha que um Sistema Operacional utilize o algoritmo _Round-Robin_ de escalonamento e precise executar dois processos, ambos com tempo de tarefa de 20 ms. Objetivando-se minimizar o tempo de resposta do sistema, determine o _quantum_ e o tempo de troca de contexto, respectivamente, dentre as alternativas apresentadas a seguir:

  * a) [x] 5 ms e 1 ms.
  * b) [ ] 4 ms e 2 ms.
  * c) [ ] 5 ms e 3 ms.
  * d) [ ] 2 ms e 1 ms.
  * e) [ ] 2 ms e 2 ms.

    Resp.:
    
    ![fig](./exercicios-resolvidos.png)

<br>

1. Suponha os processos A, B, C, e D com tempos de chegada (Arrival Time - AT) e duração de cada processo (Processing Time - PT) conforme a tabela a seguir:

    |     | AT | PT | WT | TT |
    | --: | :-: | :-: | :-: | :-: |
    | A |  0 |  8 |   |  |
    | B |  1 |  5 |
    | C |  3 |  1 |
    | D |  6 |  4 |

    Determine o tempo médio na execução dos processos.

    <br>

    Resp.: 

    Fila de execução:

    | A(2) || B(2) || A(2) || C(1) || B(2) || D(2) || A(2) || B(1) || D(2) || A(2) |
    | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |

    t<sub>_A_</sub> = 18 - 8 = 10 ms <br>
    t<sub>_B_</sub> = 14 - 1 - 5 = 8 ms <br>
    t<sub>_C_</sub> = 7 - 3 - 1 = 3 ms <br>
    t<sub>_D_</sub> = 16 - 6 - 4 = 6 ms <br>

    t<sub>médio</sub> = (10 + 8 + 3 + 6) / 4 = 6,75 ms

<br>

__Ignorar o restante (em elaboração)__

1. dfvfd

WT = Tempo de espera (Waiting Time)
TT = Tempo total de execução (Turnaround Time)

    |     | AT  | PT  | WT  |  TT |
    | :-- | :-: | :-: | :-: | :-: |
    | P1  |  0  | 10  |  0  |
    | P2  |  0  |  5  |  5  |
    | P3  |  4  |  8  |
    | P4  | 10  |  3  |

    | P1(5) | P2(5) |

<br>

[TANENBAUM-4e_2016]: /referencias/README.md#TANENBAUM-4e_2016
