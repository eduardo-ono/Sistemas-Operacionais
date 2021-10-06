> #### Sistemas Operacionais

# Aulas

Prof. Eduardo Ono

<br>

<details>
  <summary id="aula-01">
    <strong>Aula 01 - Conceitos e História dos Sistemas Operacionais</strong>
  </summary>
  <section markdown="1">

* __Conceitos__

  * Sistema
    * Sistema Computacional
    * Sistema Operacional

      > Um ___Sistema Operacional___ é um conjunto de gerenciadores dos componentes de um computador. Fornece também uma interface para que o usuário tenha acesso a esses componentes.

  * __História de Sistemas Operacionais__
    * Microsoft Windows
      * [TecMundo] [A história do Windows](https://www.youtube.com/watch?v=0Fjwg6q_cfI) (YouTubbe, 14:00, Abr/2018)

  * [CrashCourse] [Operating Systems: Crash Course Computer Science #18](https://www.youtube.com/watch?v=26QPDBe-NB8) (YouTube, 13:35, Jun/2017)

  <br>
  </section>
</details>

---

<details>
  <summary id="aula-02">Aula 02

  ### Interpretador de Comandos; Sistemas Operacionais baseados no kernel Linux
  </summary>

  * **Interpretador de Comandos do Windows (Prompt de Comando e PowerShell)**

  * http://linuxcommand.org/lc3_lts0040.php

  *  **Interpretador de Comandos do Linux (Bash e outros)**

  * [Bóson Treinamentos] [Por que é importante aprender Linux](https://www.youtube.com/watch?v=UsHiWIgxj2M) (YouTube, 18:52)

  * **Bash Scripting**
    * Vídeo Aulas
      * [linuxhint] [Bash Scripting Full Course 3 Hours](https://www.youtube.com/watch?v=e7BufAVwDiM) (YouTube, 3:08:03, Mai/2019)

</details>

---

<details>
  <summary id="aula-03">Aula 03

  ### Passagem de parâmetros por linha de comando (programação em C)
  </summary>

  * Programa em C que exibe um histograma das ocorrências das letras do alfabeto de um arquivo .txt.

  * Exercícios
    * Implementar no programa <a href="../programas-em-c/histograma.c">histograma.c</a> funcionalidade para que o programa possa receber como parâmetros nomes de arquivos de texto (.txt). O programa deverá apresentar um único histograma com a ocorrência das letras de todos os arquivos de texto.

  * Referências Bibliográficas
    * [Linux Notes for Professionals](https://goalkicker.com/LinuxBook/) (PDF)

  * Vídeos Recomendados
    * [Certificação Linux] [Linus Torvalds responde porque o Linux não é popular no Desktop](https://www.youtube.com/watch?v=kQilgheRZAY) (YouTube, 3:20)

</details>

---

<details>
  <summary id="aula-04">Aula 04

  ### Escalonamento em Sistemas Operacionais do Tipo Batch
  </summary>

  * Introdução ao Escalonamento
    * Algoritmos de Escalonamento: FCFS e SJF
    * Referências
      * [TANENBAUM_2016] Cap. 2.4, 2.4.1 e 2.4.2

  * Revisão de ponteiros em linguagem C
    * Bibliografia
      * [REESE_2013] Todos os capítulos

</details>

---

<details>
  <summary id="aula-05">Aula 05

  ### Gerenciamento de Processos - Processos e Threads
  </summary>

  * Bibliografia
    * [SILBERSCHATZ_2018] Cap. 3.1, 3.2 e 3.3

</details>

---

<details>
  <summary id="aula-06">Aula 06

  ### Comunicação entre Processos
  </summary>

  * Regiões Críticas
    * [TANENBAUM_2016] Caps. 2.3, 2.3.1 e 2.3.2
  * Exclusão Mútua
    * [TANENBAUM_2016] Caps. 2.3.3
  * Referências
    * , 2.3.2, 2.3.3

</details>

---

<details>
  <summary id="aula-07">Aula 07

  ### Comunicação entre Processos: Algoritmos de Exclusão Mútua
  </summary>

  * Algoritmo de Peterson (NUM_THREADS = 2)
    * [TANENBAUM_2016] Caps. 2.3.3 e 2.3.4
    * Programas em C
      * [aula-peterson-01.c](../programas-em-c/aula-peterson-01.c)

  * Algoritmo (da Padaria) de Lamport (NUM_THREADS > 2)
    * [CommACM_Lamport](http://lamport.azurewebsites.net/pubs/bakery.pdf)
    * Vídeos
      * [Turing Awardee Clips] [Lamport on discovering the Bakery Algorithm](https://www.youtube.com/watch?v=zMSUdp5PH4c) (YouTube, 3:56, Out/2020)
    * Programas em C
      * [aula-lamport-01.c](../programas-em-c/aula-lamport-01.c)

</details>

---

<details>
  <summary id="aula-08">Aula 08

  ### Comunicação entre Processos: Semáforos e MUTEX; Deadlock e Starvation
  </summary>

  * Semáforos
    * [TANENBAUM_2016] Caps.
    * Programas em C
      * [semaforo-sincronizacao.c](../programas-em-c/semaforo-sincronizacao.c)

  * MUTEX
    * Vídeos
    * Programas em C
      * [semaforo-00.c](../programas-em-c/semaforo-00.c)

</details>

---

<details>
  <summary id="aula-09">Aula 09

  ### Problemas Clássicos de Sincronização
  </summary>
  <section markdown="1">

  * Tópicos

    * Produtor-Consumidor
    * Jantar dos Filósofos

  </section>
</details>

---

<details>
  <summary id="aula-10">Aula 10

  ### Escalonamento de Processos
  </summary>
  <section markdown="1">

  * Conteúdo
    * [Algoritmos de Escalonamento](../conteudo/escalonamento-de-processos/)
      * [Round-Robin](../conteudo/escalonamento-de-processos/round-robin/)

  </section>
</details>

---

<details>
  <summary id="aula-11">Aula 11

  ### Gerenciamento de Memória: Fundamentos
  </summary>
  <section markdown="1"><br>

  * #### Tópicos

    * Conceitos
      * Ref.: [[TANENBAUM-4e_2016]]


  * #### Vídeos de Apoio

  ||
  | --- |
  | História: Gerenciamento de Memória no DOS  |
  | [![img](https://img.youtube.com/vi/cTVXKfYOYxo/default.jpg)](https://www.youtube.com/watch?v=cTVXKfYOYxo "[UNIVESP] Só Precisamos de 640 kB de Memória? \| 16-bits até 64-bits! \|\| 49:12, YouTube, Mai/2021")

  </section>
</details>

---

<details>
  <summary id="aula-12">Aula 12

  ### Gerenciamento de Memória: Memória Virtual
  </summary>
  <section markdown="1">

  * #### Tópicos

    * Fundamentos
      * Espaço de Endereçamento
        * Ref.: [[TANENBAUM-4e_2016]] Cap. 3, pp. 125-129.
      * Abordagens gerais para lidar com a sobrecarga da memória principal
        * Swapping (Troca de processos)
          * Gerenciamento
            * [Fig.](../conteudo/06a-gerenciamento-de-memoria/figuras/swapping-gerenciamento.png)
            * Mapas de bits
        * Memória Virtual

    * Memória Virtual
      * Conceitos
        > Cada processo tem seu próprio espaço de endereçamento, o qual é dividido em blocos chamados de páginas (ex. 4 KB).
      * Técnicas de Memória Virtual
        * Paginação
          > Blocos de tamanho fixo (ex. 4 KB).
          * Tabelas de Páginas
            * Estruturas de Tabelas de Páginas
              * Ref.: [[TANENBAUM-4e_2016]] Cap. 3, pp. 141-144.
              * Tabelas de página multinível
              * Tabelas Hash
              * Tabelas de páginas invertidas
          * Algoritmos de Substituição de Páginas
            * [Resumo](../conteudo/06a-gerenciamento-de-memoria/memoria-virtual/algoritmos-substituicao-paginas.md)
            * Ref.: [[TANENBAUM-4e_2016]] Cap. 3, pp. 144-153.
            * Ótimo
            * NRU (não usadas recentemente)
            * FIFO (primeiro a entrar, primeiro a sair)
            * Segunda chance
            * Relógio
            * LRU (usadas menos recentemente)
            * NRU (não frequentemente usadas)
            * Envelhecimento (_Aging_)
            * Conjunto de Trabalho
            * WSClock
        * Segmentação
          > Blocos de tamanho variável, chamados de segmentos. Contém mesmo tipo de informação.

    * RAM Disk

  * #### Vídeos de Apoio

    | __Gerenciamento de Memória__ |
    | --- |
    | Introdução; Swapping;  |
    [![](https://img.youtube.com/vi/Q8ZqjEafmNc/default.jpg)](https://www.youtube.com/watch?v=Q8ZqjEafmNc "[UNIVESP] Sistemas Operacionais - Aula 17 - Introdução ao Gerenciamento de Memória \|\| 25:54, YouTube, Jun/2017")
    | Técnicas de Memória Virtual |
    [![](https://img.youtube.com/vi/QjieJPckuDI/default.jpg)](https://www.youtube.com/watch?v=QjieJPckuDI "[UNIVESP] Sistemas Operacionais - Aula 18 - Técnicas de Memória Virtual \|\| 25:04, YouTube, Jun/2017")
    | Paginação;
    [![](https://img.youtube.com/vi/4EaBN98dk40/default.jpg)](https://www.youtube.com/watch?v=4EaBN98dk40 "[UNIVESP] Sistemas Operacionais - Aula 19 - Paginação \|\| 25:04, YouTube, Jun/2017")
    | Algoritmos de Substituição de Páginas |
    [![](https://img.youtube.com/vi/j6RMVMUxYmc/default.jpg)](https://www.youtube.com/watch?v=j6RMVMUxYmc "[UNIVESP] Sistemas Operacionais - Aula 20 - Algoritmos de Substituição de Páginas \|\| 18:30, YouTube, Jun/2017")

  * #### Exercícios

    * Apontar, no vídeo a seguir, os principais erros de conceitos cometidos:

      | [![](https://img.youtube.com/vi/8Md8cHhpZUk/default.jpg)](https://www.youtube.com/watch?v=8Md8cHhpZUk "[Bóson Treinamentos] TRANSFORMANDO MEMÓRIA RAM EM UM SSD NVME, ISSO É MUITO RÁPIDO \|\| 12:52, YouTube, Mai/2021.")
      | --- |

  </section>
</details>

---

<details>
  <summary id="aula-13">Aula 13

  ### Gerenciamento de Arquivos
  </summary>
  <section markdown="1"><br>

  * #### Tópicos

    * [Sistemas de Arquivos](../conteudo/07-gerenciamento-de-arquivos/sistema-de-arquivos/)
      * Ref.: [[TANENBAUM-4e_2016]]

  * #### Vídeos de Apoio

  | Gerenciamento de Arquivos |
  | --- |
  | Partições |
  | [![](https://img.youtube.com/vi/Vd-CEeoonIM/default.jpg)](https://www.youtube.com/watch?v=Vd-CEeoonIM "[Diolinux] O que são partições? - Primárias, Lógicas e Estendidas (MBR/GPT) \|\| 9:55, YouTube, Abr/2019.")
  | Sistemas de Arquivos |
  | [![](https://img.youtube.com/vi/KPWtWB0x9rI/default.jpg)](https://www.youtube.com/watch?v=KPWtWB0x9rI "[Bóson Treinamentos] O que é um Sistema de Arquivos - Curso de Hardware \|\| 9:55, YouTube, Abr/2019.")

  * #### Exercícios

    * Implementar um programa em C que receba como parâmetro o path de algum diretório. O programa deverá listar todos os arquivos e subdiretório contidos no diretório fornecido. Caso nenhum parâmetro seja fornecido, o programa deverá considerar o diretório corrente.

  </section>
</details>

---

<details>
  <summary id="aula-14">Aula 14

  ### Gerenciamento de Periféricos
  </summary>
  <section markdown="1">

  * #### Tópicos

    * [Gerenciamento de E/S](../conteudo/gerenciamento-de-perifericos/)
      * Ref.: [[TANENBAUM-4e_2016]]

    * Técnicas de E/S

      * Independência de dispositivo
        * Cabe ao S.O. cuidar das particularidades
      * Nomenclatura uniforme

      * Modos de Operação de E/S
        * E/S programada
          * Resposabilidade total da CPU
          * Os dados são trocados entre a CPU e o módeulo de E/S
        * E/S via interrupções
        * E/S via acesso direto à memória (DMA)
          * Vantagens x Desvantagens
          * Necessita de uma controladora DMA


  * #### Vídeos de Apoio

    | Gerenciamento de Periféricos |
    | --- |
    | Gerenciamento de E/S |
    | [![](https://img.youtube.com/vi/E0HHKJPIwmg/default.jpg)](https://www.youtube.com/watch?v=E0HHKJPIwmg "[Diolinux] Sistemas Operacionais – Aula 21 – Introdução à E/S \|\| 27:05, YouTube, Jun/2017.")

  </section>
</details>

---

<br>

[TANENBAUM-4e_2016]: ../README.md#TANENBAUM-4e_2016
