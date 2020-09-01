#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	char nome[128];
	
	printf("Entre com o seu nome completo: ");
	gets(nome);
	printf("%s\n", nome);
	printf("Tamanho = %d\n", strlen(nome));
	
	return 0;
}

