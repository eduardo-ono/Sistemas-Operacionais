#include <stdio.h>

int main()
{
    int a = 51;
    float x = 2.5;
    int *pa;
    float *px;

    pa = &a;
    px = &x;

    printf("a = %d\n", *pa);
    printf("x = %.1f\n", *px);

    return 0;
}
