### Sistemas Operacionais

# Bash shell

Prof. Eduardo Ono

<br>

## Principais comandos

  * printenv

    * Descrição
      * Lista as variáveis de ambiente.
    * Exemplos
      * printenv
      * printenv | less
      * printenv | more
      * printenv | grep HOME 


## Comandos de Informação do Sistema

* neofetch

  ```sh
  sudo apt install neofetch
  ```

* sensors

  ```sh
  sudo apt install lm-sensors
  ```

* GPU Drivers

  ```
  lspci -nnk | grep -i -EA3 "3d|display|vga"
  ```

  ```
  sudo lshw -c video
  ```

<br>
