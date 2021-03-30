#include <stdio.h>
#include <string.h>

int main()
{
	char nome[50];
	char *sobrenome;

	strcpy(nome, "Fulano"); // { 'F', 'u', 'l', 'a', 'n', 'o', '\0' }
	printf("%s\n", nome);
	// sobrenome = &nome[strlen(nome) + 1];
	sobrenome = nome + 7;
	printf("Endereco de nome = %p\n", (void*)nome);
	printf("Endereco de nome = %p\n", (void*)nome);
	strcpy(sobrenome, " de Tal");  // { 'F', 'u', 'l', 'a', 'n', 'o', '\0', ' ', 'd', 'e', ' ', 'T', 'a', 'l', '\0' }
	printf("%s\n", nome);
	printf("%s\n", sobrenome);
	printf("%s%s\n", nome, sobrenome);
	printf("%s\n", sobrenome);

	return 0;
}
