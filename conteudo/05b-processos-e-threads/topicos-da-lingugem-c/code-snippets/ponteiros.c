/*
 * Programa que ilustra o uso do tipo void*.
*/

#include <stdio.h>

void f(void* ptr, char tipo)
{
    char ch;
    int intValor;
    float floatValor;
    double doubleValor;

    switch (tipo) {
        case 'c': ch = *((char*)ptr);
        printf("%c", ch);
        break;
        case 'd': doubleValor = *((double*)ptr);
        printf("%.10lf", doubleValor);
        break;
    }
    printf("\n");
}

int main()
{
    char letra = 'A';
    int idade = 47;
    float pi = 3.1416;
    double inf = 1e-8;


    f((void*)&letra, 'c');
    f((void*)&idade, 'i');
    f((void*)&pi, 'f');
    f((void*)&inf, 'd');

    return 0;
}
