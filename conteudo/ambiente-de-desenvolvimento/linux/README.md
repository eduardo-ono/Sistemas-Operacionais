> <h5>Sistemas Operacionais > Conteúdo > Ambiente de Desenvolvimento</h5>

# Ambiente de Desenvolvimento :: Linux

Prof. Eduardo Ono

<br>

## Linux

<a id="ubuntu"></a>Instalação do Ubuntu 20.04 junto ao Windows 10/11.

### Opção 1: Dual Boot

* [Dioliux] https://youtu.be/6D6L9Wml1oY (14:17)

### Opção 2: Máquina Virtual (VirtualBox)

* [DevSuperior] https://youtu.be/wGwikwPrACA (23:25)

### Opção 3: Virtualização do Ubuntu altravés do WSL (Windows 10/11)

* Instruções:

  * https://docs.microsoft.com/pt-br/windows/wsl/install

* Resumo das instruções para instalação do WSL

  * No __Windows 10 (2004+)/11__, abrir o Terminal como Administrador e executar o comando:

    ```powershell
    wsl --install
    ```

    Esse comando habilitará os componentes necessários, baixará o kernel mais recente do Linux, definirá o WSL 2 como padrão e instalará uma distribuição do Linux (Ubuntu mais recente). Para instalação de outras distrubuições, veja o tópico 'Instalar uma distrubuição ("distro") disponível'.

    Na primeira vez que a distribuição Linux recém-instaladado for iniciada, uma janela de console será aberta e será solicitado um _username_ e uma _password_ para completar a instalação.

* Verificar qual a distribuição instalada:

  ```powershell
  wsl --list --verbose
  ```
  ou

  ```powershell
  wsl -l -v
  ```

* Listar todas as distribuições disponíveis para instalação:

  ```powershell
  wsl --list --online
  ```

  ou

  ```powershell
  wsl -l -o
  ```

* Instalar uma distribuição ("distro") disponível:

  ```powershell
  wsl --instal -d <nome_da_distro>
  ```

  * Exemplos

    ```powershell
    wsl --install -d Ubuntu-20.04
    ```

    ```powershell
    wsl --install -d Debian
    ```

* #### Vídeos de Apoio

  | Thumb | Descrição |
  | :-: | --- |
  | [![img](https://img.youtube.com/vi/FQ6ahcJOVz0/default.jpg)](https://www.youtube.com/watch?v=FQ6ahcJOVz0) | <sup>[Pureinfotech]</sup> [__Windows 11: Install WSL and run Linux GUI apps__](https://www.youtube.com/watch?v=FQ6ahcJOVz0)<br> <sub>(8:17, YouTube, Jul/2021)</sub>
  | [![img](https://img.youtube.com/vi/Qln40TVXdfE/default.jpg)](https://www.youtube.com/watch?v=Qln40TVXdfE) | <sup>[Methamphetameme McMeth]</sup> [__Install Kali Linux using WSL2 on Windows 11 (Proper Way)__](https://www.youtube.com/watch?v=Qln40TVXdfE)<br> <sub>(7:19, YouTube, Out/2021)</sub>

* [Rocketseat] https://www.youtube.com/watch?v=hd6lxt5iVsg (24:26)  // Windows 10 Home
* [David Bombal] https://youtu.be/_fntjriRe48 (20:33)  // Windows 10 Home
* [TekZoom] https://youtu.be/fRnacEsj1MM (6:50)  // Windows 10 Pro

<br>

## Compiladores C/C++

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

## Editor: Microsoft Visual Studio Code (VS Code)

* Link para download:

  * https://code.visualstudio.com

* Extensões:

  * [Microsoft] __C/C++__

  * [Jun Han] __Code Runner__
    * Para compilar/executar um programa aberto no VS Code, usar a combinação de teclas <kbd>Ctrl</kbd>+<kbd>Alt</kbd>+<kbd>N</kbd>.

<br>
