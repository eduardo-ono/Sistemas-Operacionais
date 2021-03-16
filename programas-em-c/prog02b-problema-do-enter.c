#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int hora, min, seg;
	char letra;
	
	printf("Digite um tempo [hh:mm:ss]: ");
	scanf("%d:%d:%d", &hora, &min, &seg);
	printf("Digite uma letra: ");
	// fflush(stdin);
	scanf(" %c", &letra);  // "Considera o Enter inserido no scanf anterior
	printf("Hora = %02d\n", hora);
	printf("Min = %02d\n", min);
	printf("Seg = %04d\n", seg);
	printf("%c\n", letra);
	
	return 0;
}
