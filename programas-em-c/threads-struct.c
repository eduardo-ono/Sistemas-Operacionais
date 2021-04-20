/*
 * Variáveis Atômicas utilizando threads em linguagem C (padrão POSIX).
 *
 * Copyright(c) Eduardo Ono.
*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

typedef struct {
    float peso;
    float altura;
    int idade;
} Pessoa;

void* f(void *arg)
{
    // Pessoa pessoa = *((Pessoa*)arg);
    Pessoa pessoa = *((Pessoa*)arg);
    float imc;

    imc = pessoa.peso / (pessoa.altura * pessoa.altura);

    printf("%.1f\n", pessoa.peso);
    printf("%.1f\n", pessoa.altura);
    printf("%d\n", pessoa.idade);
    printf("imc = %.1f\n", imc);

	return NULL;
}

int main()
{
    Pessoa pessoa1;
    Pessoa *pessoa2;
    pthread_t t0, t1;

    pessoa1.peso = 67;
    pessoa1.altura = 1.82;
    pessoa1.idade = 93;

    pessoa2 = (Pessoa*)malloc(sizeof (Pessoa));
    pessoa2->peso = 74; // (*pessoa2).peso = 74;
    pessoa2->altura = 1.91; // (*pessoa2).altura = 1.91;
    pessoa2->idade = 59; // (*pessoa2).idade = 59;

    pthread_create(&t0, NULL, f, (void*)&pessoa1);
	pthread_create(&t1, NULL, f, (void*)pessoa2);

    pthread_join(t0, NULL);
    pthread_join(t1, NULL);
	printf("\n");

	return 0;
}
