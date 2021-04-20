/*
	Histograma
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>  // toupper()

// Inicializa o vetor com 0 (zero) para cada uma das 26 letras do alfabeto
int alfabeto[26] = { 0 };

void contarLetras( FILE* file )
{
	char buffer[2048];  // Armazena uma linha do arquivo de texto
	int i, indice;  // indice: posição de uma letra no vetor alfabeto

	while ( !feof( file ) )
	{
		strcpy( buffer, "" );  // "Zera" o buffer
		fgets( buffer, 2047, file );

		// Percorre o buffer letra a letra
		for ( i = 0; i < strlen( buffer ); i++ )
		{
			// Converte uma letra minúscula para maiúscula
			if ( buffer[i] >= 'a' && buffer[i] <= 'z' )
				buffer[i] = (char)toupper( buffer[i] );
				// "Casting" recomendável pois toupper() retorna um int

			// Incrementa a quantidade de uma letra no vetor alfabeto
			if ( buffer[i] >= 'A' && buffer[i] <= 'Z' )
			{
				// Localiza a posição (índice) da letra no vetor alfabeto
				indice = buffer[i] - 65;  // char 'A' = int 65 na Tabela ASCII
				++alfabeto[indice];
			}
		}
	}
}

int main( int argc, char* argv[] )
{
	char arquivo[] = "texto1.txt";
	FILE *hArquivo;
	int i;

	if ( ( hArquivo = fopen( arquivo, "r" ) ) == NULL )
	{
		printf( "Arquivo invalido!\n" );
		return 1;
	}

	contarLetras( (void*)hArquivo );

	fclose( hArquivo );

	// Imprime os dados da distribuição das frequencias das letras como um objeto JS
    printf("const obj = {\n");
	for ( i = 0; i < 26; i++ )
	{
		printf("  \"%c\": %d,\n", i + 65, alfabeto[i] );
	}
    printf("};\n");

	return 0;
}
