### Sistemas Operacionais

# Aulas

Prof. Eduardo Ono

<br>

<details>
  <summary style="font-size: 1.2rem; font-weight: bold; padding: 10px; background-color: #F1F8FF; border: 1px solid #C8E1FF; border-radius: 6px">
    Aula 01 - Conceitos e História de Sistemas Operacionais
  </summary>
  <section style="border: 1px solid #C8E1FF; border-radius: 6px">

  * **Conceitos**
    * Sistema
    * Sistema Operacional<br>
      > Um _*Sistema Operacional*_ é um conjunto de gerenciadores dos componentes de um computador. Fornece também uma interface para que o usuário tenha acesso a esses componentes.

  * **História de Sistemas Operacionais**
    * Microsoft Windows
      * [TecMundo] [A história do Windows](https://www.youtube.com/watch?v=0Fjwg6q_cfI) (YouTubbe, 14:00, Abr/2018)

  * [CrashCourse] [Operating Systems: Crash Course Computer Science #18](https://www.youtube.com/watch?v=26QPDBe-NB8) (YouTube, 13:35, Jun/2017)

  <br>
  </section>
</details>

<br>

<details>
  <summary style="font-size: 1.2rem; font-weight: bold; padding: 10px; background-color: #F1F8FF; border: 1px solid #C8E1FF; border-radius: 6px">
    Aula 02 - Interpretador de Comandos; Sistemas Operacionais baseados no kernel Linux
  </summary>

  * **Interpretador de Comandos do Windows (Prompt de Comando e PowerShell)**

  * http://linuxcommand.org/lc3_lts0040.php

  *  **Interpretador de Comandos do Linux (Bash e outros)**

  * [Bóson Treinamentos] [Por que é importante aprender Linux](https://www.youtube.com/watch?v=UsHiWIgxj2M) (YouTube, 18:52)

  * **Bash Scripting**
    * Vídeo Aulas
      * [linuxhint] [Bash Scripting Full Course 3 Hours](https://www.youtube.com/watch?v=e7BufAVwDiM) (YouTube, 3:08:03, Mai/2019)

</details>

<br>

<details>
  <summary style="font-size: 1.2rem; font-weight: bold; padding: 10px; background-color: #F1F8FF; border: 1px solid #C8E1FF; border-radius: 6px">
    Aula 03 - Passagem de parâmetros por linha de comando (programação em C)
  </summary>

  * Programa em C que exibe um histograma das ocorrências das letras do alfabeto de um arquivo .txt.

  * Exercícios
    * Implementar no programa <a href="../programas-em-c/histograma.c">histograma.c</a> funcionalidade para que o programa possa receber como parâmetros nomes de arquivos de texto (.txt). O programa deverá apresentar um único histograma com a ocorrência das letras de todos os arquivos de texto. 

  * Referências Bibliográficas
    * [Linux Notes for Professionals](https://goalkicker.com/LinuxBook/) (PDF)

  * Vídeos Recomendados
    * [Certificação Linux] [Linus Torvalds responde porque o Linux não é popular no Desktop](https://www.youtube.com/watch?v=kQilgheRZAY) (YouTube, 3:20)

</details>

<br>

<details>
  <summary style="font-size: 1.2rem; font-weight: bold; padding: 10px; background-color: #F1F8FF; border: 1px solid #C8E1FF; border-radius: 6px">
    Aula 04 - Escalonamento em Sistemas Operacionais do Tipo Batch
  </summary>

  * Introdução ao Escalonamento
    * Algoritmos de Escalonamento: FCFS e SJF
    * Referências
      * [TANENBAUM_2016] Cap. 2.4, 2.4.1 e 2.4.2

  * Revisão de ponteiros em linguagem C
    * Bibliografia
      * [REESE_2013] Todos os capítulos

</details>

<br>

<details>
  <summary style="font-size: 1.2rem; font-weight: bold; padding: 10px; background-color: #F1F8FF; border: 1px solid #C8E1FF; border-radius: 6px">
    Aula 05 - Gerenciamento de Processos - Processos e Threads
  </summary>

  * Bibliografia
    * [SILBERSCHATZ_2018] Cap. 3.1, 3.2 e 3.3

</details>

<br>

<details>
  <summary style="font-size: 1.2rem; font-weight: bold; padding: 10px; background-color: #F1F8FF; border: 1px solid #C8E1FF; border-radius: 6px">
    Aula 06 - Comunicação entre Processos
  </summary>

  * Regiões Críticas
    * [TANENBAUM_2016] Caps. 2.3, 2.3.1 e 2.3.2
  * Exclusão Mútua
    * [TANENBAUM_2016] Caps. 2.3.3
  * Referências
    * , 2.3.2, 2.3.3

</details>

<br>

<details>
  <summary style="font-size: 1.2rem; font-weight: bold; padding: 10px; background-color: #F1F8FF; border: 1px solid #C8E1FF; border-radius: 6px">
    Aula 07 - Comunicação entre Processos: Algoritmos de Exclusão Mútua
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
<details>
  <summary style="font-size: 1.2rem; font-weight: bold; padding: 10px; background-color: #F1F8FF; border: 1px solid #C8E1FF; border-radius: 6px">
    Aula 08 - Comunicação entre Processos: Semáforos e MUTEX; Deadlock e Starvation
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

<br>

<details>
  <summary style="font-size: 1.2rem; font-weight: bold; padding: 10px; background-color: #F1F8FF; border: 1px solid #C8E1FF; border-radius: 6px">
    Aula ?? - Gerenciamento de Arquivos - Partições
  </summary>

  * Vídeos Recomendados
    * [Diolinux] [O que são partições? - Primárias, Lógicas e Estendidas (MBR/GPT)](https://www.youtube.com/watch?v=Vd-CEeoonIM) (YouTube, 9:55, Abr/2019)

</details>

<br>
