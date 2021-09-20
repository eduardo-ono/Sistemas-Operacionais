### Sistemas Operacionais

# Ambiente de Desenvolvimento

Prof. Eduardo Ono

<br>

## <a id="ubuntu">Instalação do Ubuntu 20.04 junto ao Windows 10</a>

### Opção 1: Dual Boot

* [Dioliux] https://youtu.be/6D6L9Wml1oY (14:17)

### Opção 2: Máquina Virtual (VirtualBox)

* [DevSuperior] https://youtu.be/wGwikwPrACA (23:25)

### Opção 3: Virtualização do Ubuntu (sem interface gráfica) altravés do WSL 2

* https://docs.microsoft.com/pt-br/windows/wsl/install-win10#manual-installation-steps
* [Rocketseat] https://www.youtube.com/watch?v=hd6lxt5iVsg (24:26)  // Windows 10 Home
* [David Bombal] https://youtu.be/_fntjriRe48 (20:33)  // Windows 10 Home
* [TekZoom] https://youtu.be/fRnacEsj1MM (6:50)  // Windows 10 Pro

<br>

## Compiladores C/C++

* __Compilador para Windows__

  * TDM-GCC: https://jmeubank.github.io/tdm-gcc/

* __Compilador para Linux__ (Necessário apenas no  WSL 2)

  * GCC

    ```bash
    sudo apt update
    sudo apt upgrade
    ```

    ```bash
    sudo apt install gcc
    ```

* __Configuração da linha de comando__

  * Linguagem C

    `gcc -Wall -pthread -o output_filename source_filename.c`

  * Linguagem C++

    `g++ -Wall -pthread -o output_filename source_filename.cpp`

<br>

## Editor: Microsoft Visual Studio Code (VS Code)

* __Download__

  * https://code.visualstudio.com

* __Extensões__
  * [Jun Han] _Code Runner_
    * Para compilar/executar um programa, usar a combinação de teclas <kbd>Ctrl</kbd> + <kbd>Alt</kbd> + <kbd>N</kbd>.

<br>

## Referências Bibliográficas

<br>
