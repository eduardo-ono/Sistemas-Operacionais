#include <stdio.h>
#include <pthread.h>

void* piscar(void *p)
{
    int *v = (int*)p;
    int tid = v[0];
    int delay = v[1];
    char ch = 178; // Caracter "bloco"
    int i;

    while (1) {
        switch (tid)
        {
            case 0:
                printf("\r%c", ch == ' ' ? 178 : ' ');
                break;
            case 1:
                printf("\r\t\t%c", ch == ' ' ? 178 : ' ');
                break;
        }
        for (i = 0; i < delay; i++) ;
    }

    return NULL;
}

int main()
{
    pthread_t t0, t1;
    int delay = 1000000000;
    int v1[] = { 0, delay };
    int v2[] = { 1, delay };

    pthread_create(&t0, NULL, piscar, (void*)v1);

    pthread_join(t0, NULL);

    return 0;
}
