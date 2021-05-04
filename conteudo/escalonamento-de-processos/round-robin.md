> ### Sistemas Operacionais > Conteúdo > [Escalonamento de Processos](../escalonamento-de-processos/README.md)

# Round-Robin (Turno Rotativo ou Circular)

Prof. Eduardo Ono

<br>

## Referências

* [[TANENBAUM-4e_2016]]

<br>

## Características

* Classificação: Preemptivo
* A lista de processos é implementada como uma fila circular.
* Quantum: tempo máximo no qual um processo pode utilizar a CPU ininterruptamente. Tem por objetivo evitar o monopólio da CPU por um único processo.


## Exemplos

<br>

## Vídeos de Apoio

|| Descrição |
| :-: | --- |
| [![](https://img.youtube.com/vi/MWbPgxOCrFk/default.jpg)](https://www.youtube.com/watch?v=MWbPgxOCrFk "") | [UNIVESP] <br> [**Sistemas Operacionais – Aula 06 - Escalonamento de Processo**](https://www.youtube.com/watch?v=MWbPgxOCrFk) \|\| 25:52, YouTube, Mai/2017.

## Exercícios Resolvidos

1. [ENADE-2019_Eng-Computação (adaptado)] Suponha que um Sistema Operacional utilize o algoritmo Round-Robin de escalonamento e precise executar dois processos, ambos com tempo de tarefa de 20 ms. Objetivando-se minimizar o tempo de resposta do sistema, determine o _quantum_ e o tempo de troca de contexto, respectivamente, dentre as alternativas apresentadas a seguir:

    * [x] 5 ms e 1 ms.
    * [ ] 4 ms e 2 ms.
    * [ ] 5 ms e 3 ms.
    * [ ] 2 ms e 1 ms.
    * [ ] 2 ms e 2 ms.

    Resp.: | 5(A) | 1 | 5(B) | 1 | 5(A) | 1 | 5(B) | 1 | 5(A) | 1 | 5(B) | 1 | 5(A) | 1 | 5(B) --> _t_<sub>resp</sub> = 47 ms.

1. Suponha os processos A, B, C, e D com tempos de chegada (Arrival Time - AT) e duração de cada processo (Processing Time - PT) conforme a tabela a seguir:

    |     | AT | PT | WT | TT |
    | --: | :-: | :-: | :-: | :-: |
    | P1  |  0 |  8 |   |  |
    | P2  |  1 |  5 |
    | P3  |  3 |  1 |
    | P4  |  6 |  4 |


    | A(2) || B(2) || A(2) || C(1) || B(2) || D(2) || A(2) || B(1) || D(2) || A(2) |
    | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |

    t<sub>_A_</sub> = 18 - 8 = 10 ms
    t<sub>_B_</sub> = 14 - 1 - 5 = 8 ms
    t<sub>_C_</sub> = 7 - 3 - 1 = 3 ms
    t<sub>_D_</sub> = 16 - 6 - 4 = 6 ms

    t<sub>médio</sub> = (10 + 8 + 3 + 6) / 4 = 6,75 ms

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

[TANENBAUM-4e_2016]: ../../referencias/README.md#TANENBAUM-4e_2016
