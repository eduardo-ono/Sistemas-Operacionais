> <h5>Sistemas Operacionais > Conteúdo > Ambiente de Desenvolvimento</h5>

# Ambiente de Desenvolvimento :: Compiladores C/C++

Prof. Eduardo Ono

<br>

## GCC

* __Compilador TDM-GCC para Windows 10/11__

  * Link para download

    * TDM-GCC: https://jmeubank.github.io/tdm-gcc/

* __Compiladores para Linux__

  * Para verificar se o GCC está instalado:

    ```bash
    gcc --version
    ```

  * __Instalação do GCC__

    ```bash
    sudo apt update && sudo apt upgrade
    ```

    ```bash
    sudo apt install gcc
    ```

* Linha de comando para execução de um programa em C:

  * Linguagem C

    `gcc -Wall -pthread -o output_filename source_filename.c`

  * Linguagem C++

    `g++ -Wall -pthread -o output_filename source_filename.cpp`

<br>
