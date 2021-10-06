> Sistemas Operacionais > Conteúdo

# Interface de Linha de Comando (Command Line Interface - CLI)

Prof. Eduardo Ono

<br>

## Fundamentos

* [CrashCourse] [Keyboards & Command Line Interfaces: Crash Course Computer Science #22](https://www.youtube.com/watch?v=4RPtJ9UyHS0) (YouTube, 11:23, Ago/2017)

<br>

### Passagem de parâmetros para um programa em C através da linha de comando

```c
int main(int argc, char *argv[])
{
    // Código
}
```

Outra opção (equivalente):
```c
int main(int argc, char **argv)
{
    // Código
}
```

A variável _argc_ armazena a quantidade de parâmetros recebidos pelo programa, armazenando pelo menos o valor 1 que corresponde a quantidade de um parâmetro, o próprio programa.

O vetor _argv_ armazena pelo menos uma string na posição 0, que corresponde ao path e nome do arquivo do programa em execução.

<br>

* Imprimindo todos os argumentos da linha de comando

    ```c
    int main(int argc, char *argv[])
    {
        int i;

        printf("Quantidade de parametros: %d\n", argc);

        for (i = 0; i < argc, i++)
            printf("%s\n", argv[i]);
    }
    ```

<br>

## Bibliografia

* [C Notes for Professionals](https://goalkicker.com/CBook/) (PDF)

<br>
