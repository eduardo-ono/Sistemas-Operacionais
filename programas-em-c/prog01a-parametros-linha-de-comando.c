#include <stdio.h>
#include <stdlib.h>  // atoi(); atof()
#include <math.h>
#include <locale.h>

int main(int argc, char* argv[])
{
	float x, x0, x1, y;
	int atribuidos;

	setlocale(LC_ALL, "Portuguese");
	do {
		printf("Entre com os dois valores numericos: ");
		atribuidos = scanf("%f%f", &x0, &x1);
		if (atribuidos != 2)
		{
			printf("Valores invlidos!\n");
			fflush(stdin);  // limpa o buffer do teclado
		}
	} while (argc != 3 && atribuidos != 2);
	
	// Utiliza os parametros passados na linha de comando
	if (argc == 3)
	{
		x0 = atof(argv[1]);
		x1 = atof(argv[2]);
	}
	
	for (x = x0; x <= x1; x++)
	{
		y = sqrt(x);
		printf("%.1f\t%.3f\n", x, y);
	}
	
	return 0;
}

