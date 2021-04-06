#include <stdio.h>
#include <string.h>

int main()
{
	char nome[50];
	char *sobrenome;

	printf("Entre com o primeiro nome: ");
	gets(nome);
	printf("%s\n", nome);
	printf("Endereco de nome = %p\n", (void*)nome);
	sobrenome = &nome[strlen(nome) + 1];
	printf("Endereco de sobrenome = %p\n", (void*)sobrenome);
	sobrenome = nome + strlen(nome) + 1;
	printf("Endereco de sobrenome = %p\n", (void*)sobrenome);
	strcpy(sobrenome, " de Tal");  // { 'F', 'u', 'l', 'a', 'n', 'o', '\0', ' ', 'd', 'e', ' ', 'T', 'a', 'l', '\0' }
	printf("%s\n", nome);
	printf("%s\n", sobrenome);
	printf("%s%s\n", nome, sobrenome);

	return 0;
}
