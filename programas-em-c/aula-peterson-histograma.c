/*
	Histograma
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>  // toupper()
#include <pthread.h>
#include <stdlib.h>

// Peterson
int flag[] = { 0, 0 };  // flag é um vetor de booleanos
int turno = 0;  // variável booleana; turno significa "vez"

// Inicializa o vetor com 0 (zero) para cada uma das 26 letras do alfabeto
int alfabeto[26] = { 0 };

typedef struct {
	int id;
	FILE *file;
} Arquivo;

void* contarLetras(void *p)
{
	Arquivo arquivo = *((Arquivo*)p);
	int id = arquivo.id;
	FILE *file = arquivo.file;
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

				// Algoritmo de Peterson
				flag[id] = 1;  // Quero entrar na Região Crítica
				turno = 1 - id;  // Passo a vez para a outra thread
				while ( flag[1-id] == 1 && turno != id ) ;
				// Início da REGIÃO CRÍTICA
				++alfabeto[indice];
				// Fim da REGIÃO CRÍTICA
				flag[id] = 0;  // Não quero entrar na Região Crítica
			}
		}
	}

	return NULL;
}

int main( int argc, char* argv[] )
{
	char nome_arquivo[] = "texto.txt";
	char nome_arquivo1[] = "texto1.txt";
	Arquivo arquivo, arquivo1;
	int i, j, frequencia_max;
	int histograma[26];
	const int MAX_COLS = 70;
	pthread_t t0, t1;

	/*
	Arquivo *arquivo, *arquivo1;
	arquivo = (Arquivo*)malloc(sizeof (Arquivo));
	arquivo1 = (Arquivo*)malloc(sizeof (Arquivo));
	*/

	printf( "--> Executando %s\n\n", argv[0] );

	arquivo.id = 0;
	arquivo1.id = 1;
	if ( ( arquivo.file = fopen( nome_arquivo, "r" ) ) == NULL )
	{
		printf( "Arquivo invalido!\n" );
		return 1;
	}
	if ( ( arquivo1.file = fopen( nome_arquivo1, "r" ) ) == NULL )
	{
		printf( "Arquivo invalido!\n" );
		return 1;
	}

	pthread_create(&t0, NULL, contarLetras, (void*)&arquivo);
	pthread_create(&t1, NULL, contarLetras, (void*)&arquivo1);
	pthread_join(t0, NULL);
	pthread_join(t1, NULL);

	fclose( arquivo.file );
	fclose( arquivo1.file );

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
		printf( " %c |", i + 65 );
		for ( j = 0; j < histograma[i]; j++ )
			printf( "#" );
		printf( "  %d\n", alfabeto[i] );
	}
	
	return 0;
}
