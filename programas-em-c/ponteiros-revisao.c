#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int idade;
    float peso;
} Pessoa;

int main()
{
    int a = 10;
    float x = 2.5;
    void *p;
    int *v;
    Pessoa pessoa;
    Pessoa *pessoa2;

    p = (void*)&a;
    *(int*)p = 200;
    printf("%d\n", a);

    p = (void*)&x; // p recebe o endereço de um objeto do tipo void
    *(float*)p = 7.6; // o objeto do tipo float apontado por p recebe 7.6
    printf("%f\n", x);

    p = malloc(sizeof (double));
    *(double*)p = 5000;
    printf("%f\n", *(double*)p);

    v = (int*)malloc(3000 * sizeof (int));
    v[0] = 100;
    v[1] = 200;
    printf("%d\n", v[1]);

    pessoa.idade = 43;
    pessoa.peso = 79.5;
    printf("%d anos\n", pessoa.idade);
    printf("%.1f kg\n", pessoa.peso);

    pessoa2 = (Pessoa*)malloc(sizeof (Pessoa)); // pessoa2 = new Pessoa();
    pessoa2->idade = 41;
    pessoa2->peso = 80.8;
    printf("%d anos\n", pessoa2->idade);
    printf("%.1f kg\n", pessoa2->peso);
    printf("%ld\n", sizeof (Pessoa));

    return 0;
}
