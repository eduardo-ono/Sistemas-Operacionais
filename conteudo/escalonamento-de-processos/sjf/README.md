> #### Sistemas Operacionais > Conteúdo > Escalonamento de Processos

# SJF

Prof. Eduardo Ono

<br>

## Exemplos

1. [[[STUART_2011]] Cap. 5, pp. 95-96 (adaptado)] Tempo de vida médio do escalonamento FCFS e SJF. <br>
Suponha que recebamos três _jobs_, _a_, _b_ e _c_ com _t_<sub>_a_</sub> = 20, _t_<sub>_b_</sub> = 50 e _t_<sub>_c_</sub> = 10. Considere que eles cheguem na ordem _a_, _b_, _c_, mas que cheguem tão próximos que os recebemos todos antes de podermos selecionar o primeiro a ser executado. Utilizando o escalonamento FCFS, os organizamos em fila, conforme mostra a figura (tabela) a seguir:

    | a(20) | b(50) | c(10) |
    | --- | --- | --- |

    <br>Os tempos de vida para FCFS (_First-Come First-Served_) são:

    _T_<sub>_a_</sub> = 20 <br>
    _T_<sub>_b_</sub> = 20 + 50 = 70 <br>
    _T_<sub>_c_</sub> = 20 + 50 + 10 = 80 <br>

    e o tempo de vida médio _T_<sub>_m_</sub> é <br>

    _T_<sub>_m_</sub> = (20 + 70 + 80)/3 = 56,67. <br><br>

    Comparando, se utilizarmos o escalonamneto SJF (_Shortest Job First_), executaremos os _jobs_ na ordem _c_, _a_, _b_, conforme ilustrado na figura (tabela) a seguir:

    | c(10) | a(20) | b(50) |
    | --- | --- | --- |

    <br>Os tempos de vida para SJF são:

    _T_<sub>_c_</sub> = 10 <br>
    _T_<sub>_a_</sub> = 10 + 20 = 30 <br>
    _T_<sub>_b_</sub> = 10 + 20 + 50 = 80 <br>

    e o tempo de vida médio _T_<sub>_m_</sub> é <br>

    _T_<sub>_m_</sub> = (10 + 30 + 80)/3 = 40,00. <br><br>

    Neste exemplo, economizamos 29% do tempo de vida médio utilizando o escalonamento SJF sobre o escalonamento FCFS.

<br>

[STUART_2011]: /README.md#STUART_2011
