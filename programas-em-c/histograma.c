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
	char arquivo[] = "texto.txt";
	FILE *hArquivo;
	int i, j, frequencia_max;
	int histograma[26];
	const int MAX_COLS = 70;

	printf( "--> Executando %s\n\n", argv[0] );

	if ( ( hArquivo = fopen( arquivo, "r" ) ) == NULL )
	{
		printf( "Arquivo invalido!\n" );
		return 1;
	}

	contarLetras( (void*)hArquivo );

	fclose( hArquivo );

	// Determina a posição (índice) da letra com maior frequencia no vetor
	frequencia_max = 0;
	for ( i = 0; i < 26; i++ )
		if ( alfabeto[i] > alfabeto[frequencia_max] )
			frequencia_max = i;

	// Normaliza para máximo igual a MAX_COLS colunas
	for ( i = 0; i < 26; i++ )
		histograma[i] = MAX_COLS * alfabeto[i] / alfabeto[frequencia_max];
	
	// Imprime o histograma da distribuição das frequencias das letras
	for ( i = 0; i < 26; i++ )
	{
		printf( " %c %c", i + 65, 179 );
		for ( j = 0; j < histograma[i]; j++ )
			printf( "%c", 254 );
		printf( "  %d\n", alfabeto[i] );
	}
	
	return 0;
}
