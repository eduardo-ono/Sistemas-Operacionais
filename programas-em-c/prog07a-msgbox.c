#include <stdio.h>
#include <windows.h>  // MessageBox()

int main()
{
	printf("Este programa ira exibir duas MsgBox.\n\n");
	printf("Pressione <Enter> para continuar...");
	getchar();

	MessageBox(0, "Primeira MsgBox", "Titulo 1", 0);
	MessageBox(0, "Segunda MsgBox", "Titulo 2", 1);
	
	printf("\n\n--- Fim do Programa ---\n");

	return 0;
}
