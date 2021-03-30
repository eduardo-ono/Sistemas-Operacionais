#include <stdio.h>
#include <conio.h>
#include <windows.h> // MessageBox
#include <process.h> // _beginthread()

void msgbox()
{
	MessageBox(0, "MsgBox (thread)", "Titulo 1", 1);
	_endthread();
}

int main()
{
	printf("Este programa ira exibir 2 MsgBox. Pressione qq tecla para continuar...");
	getch();
	printf("\n");

	_beginthread(msgbox, 0, NULL);
	MessageBox(0, "MsgBox (main)", "Titulo 2", 0);

	// printf("Pressione qq tecla para sair...");
	// getch();

	return 0;
}
