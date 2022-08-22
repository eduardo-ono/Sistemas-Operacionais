> Sistemas Operacionais > Conteúdo

# Interface de Linha de Comando (Command Line Interface - CLI)

Prof. Eduardo Ono

&nbsp;

## Fundamentos

* [CrashCourse] [Keyboards & Command Line Interfaces: Crash Course Computer Science #22](https://www.youtube.com/watch?v=4RPtJ9UyHS0) (YouTube, 11:23, Ago/2017)

&nbsp;

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

> A variável _argc_ armazena a quantidade de parâmetros recebidos pelo programa, armazenando pelo menos o valor 1, que corresponde ao _path_ do programa em execução.

> O vetor _argv_ armazena pelo menos uma string na posição 0, que corresponde ao _path_ completo do programa em execução.

&nbsp;

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

&nbsp;

## Referências Bibliográficas

* [C Notes for Professionals](https://goalkicker.com/CBook/) (PDF)

&nbsp;
