#include <stdio.h>
#include <windows.h>  // MessageBox()
#include <pthread.h>  // Padrão POSIX

void* msgBox()
{
       MessageBox(0, "Mensagem", "Titulo da Janela", 1);
       
       return NULL;
}

int main()
{
	pthread_t t1, t2;
	long i;

	printf("Este programa ira exibir duas MsgBox.\n\n");
	printf("Pressione <Enter> para continuar...");
	getchar();

	pthread_create(&t1, NULL, msgBox, NULL);
	pthread_create(&t2, NULL, msgBox, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

//	for (i = 0; i < 2000000000; i++);
	
	printf("\n\n--- Fim do Programa ---\n");

	return 0;
}

