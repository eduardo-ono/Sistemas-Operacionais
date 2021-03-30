#include <stdio.h>
#include <windows.h>  // MessageBox()
#include <pthread.h>  // Padrão POSIX

void* msgBox(void *param)
{
    int id = *((int*)param);  // int *p = (int*)param; int id = *p;
    printf("%d\n", id);
    if (id == 1)
	    MessageBox(0, "Mensagem", "Janela 1", 1);
    else
        MessageBox(0, "Mensagem", "Janela 2", 1);

	return NULL;
}

int main()
{
	pthread_t t1, t2;
    int id1 = 1, id2 = 2;
	long i;

	printf("Este programa ira exibir duas MsgBox.\n\n");
	printf("Pressione <Enter> para continuar...");
	getchar();

	pthread_create(&t1, NULL, msgBox, (void*)&id1);
	pthread_create(&t2, NULL, msgBox, (void*)&id2);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

	// for (i = 0; i < 2000000000; i++);
	
	printf("\n\n--- Fim do Programa ---\n");

	return 0;
}
