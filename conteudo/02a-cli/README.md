# Sistemas Operacionais > Conteúdo > CLI

Prof. Eduardo Ono

<br>

## Fundamentos

* [CrashCourse] [Keyboards & Command Line Interfaces: Crash Course Computer Science #22](https://www.youtube.com/watch?v=4RPtJ9UyHS0) (YouTube, 11:23, Ago/2017)

<br>

### Parâmetros recebidos por um programa em C através da linha de comando

```c
int main(int argc, char* argv[])
{

}
```

Outra opção:
```c
int main(int argc, char** argv)
{

}
```

A variável _argc_ sempre armazena pelo menos o valor 1 que corresponde a quantidade de um parâmetro, o próprio programa.

O vetor _argv_ armazena pelo menos uma string na posição 0, que corresponde ao path e nome do arquivo do programa em execução.

<br>

* Imprimindo todos os argumentos da linha de comando

    ```c
    int main(int argc, char* argv[])
    {
        int i;

        for (i = 0; i < argc, i++)
            printf("%s\n", argv[i]);
    }
    ```

<br>

## Bibliografia

* [C Notes for Professionals](https://goalkicker.com/CBook/) (PDF)
