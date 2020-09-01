#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int dia, mes, ano;
	char letra;
	
	printf("Digite uma data [dd:mm:aaaa]: ");
	scanf("%d:%d:%d", &dia, &mes, &ano);
	printf("Digite uma letra: ");
	scanf(" %c", &letra);  // "Considera o Enter inserido no scanf anterior
	printf("Dia = %02d\n", dia);
	printf("Mes = %02d\n", mes);
	printf("Ano = %04d\n", ano);
	return 0;
}

