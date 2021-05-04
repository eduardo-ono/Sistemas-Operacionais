> ### Sistemas Operacionais > Processos e Threads

# Algoritmo de Peterson

Prof. Eduardo Ono

<br>

## Conceitos
<br>

> ### Thread
> * [Código Fonte TV] [Thread (entenda como sua aplicação funciona) // Dicionário do Programador](https://youtu.be/xNBMNKjpJzM) (YouTube, 11:55)

<br>

> ### Algoritmo de Peterson
> * O ___Algoritmo de Peterson___ é um algoritmo de programação concorrente para exclusão mútua, que permite a dois ou mais processos ou subprocessos compartilharem um recurso sem conflitos, utilizando apenas memória compartilhada para a comunicação. Ele foi formulado por Gary L. Peterson em 1981. Embora a formulação original de Peterson funcionasse apenas com dois processos, o algoritmo pode ser estendido para mais processos.

<br>

## Algoritmo de Peterson para duas threads (linguagem C)
<br>

Variáveis globais:

```c
bool flag[2] = { false, false };
int turno = 1;  // turno = vez da thread: 0 ou 1
int id;  // id da thread: 0 ou 1 (para duas threads)
```

```c
flag[id] = 1;  // Quero entrar na Região Crítica
turno = 1-id;
while (flag[1-id] == true && turn != id);
//
// Região crítica
//
flag[id] = 0;  // Não quero entrar na Região Crítica
```

Obs.: Um cuidado que se deve ter com a instrução while. A instrução mantém a thread aguardando a finalização da outra thread, executando uma instrução nula durante este período:

```c
while (flag[1] == true && turno == 1);
```

Esse código é equivlente à:

```c
while (flag[1] == true && turno == 1)
{
    ;  // Instrução nula
}
```

<br>

## Vídeos recomendados

* [UNIVESP] [Sistemas Operacionais - Threads](https://www.youtube.com/watch?v=Tbwu55Iov5s) (YouTube, 23:55)

<br>

## Bibliografia

<br>
