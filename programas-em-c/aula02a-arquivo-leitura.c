#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // strcpy()

int main(int argc, char* argv[])
{
	char filename[256];
	FILE *arquivo = NULL;
	char buffer[4096];  // Tamanho máximo de caracteres de uma linha de texto
	
	if (argc != 2)  // Se não foi passado nenhum parâmetro
	{
 		printf("Nome do arquivo: ");
		gets(filename);
	}
	else
	{
		strcpy(filename, argv[1]);  // Copia a string de argv[1] para filename
	}
	arquivo = fopen(filename, "r");
	
	// Verifica se não foi possível "abrir" o arquivo para leitura
	if (arquivo == NULL)
	{
		printf("Arquivo invalido!\n");
		return 1;
	}
	
	while (!feof(arquivo))
	{
		strcpy(buffer, "");  // limpa o buffer
		fgets(buffer, 4095, arquivo);
		printf("%s", buffer);
	}
	
	fclose(arquivo);
	
	return 0;
}

