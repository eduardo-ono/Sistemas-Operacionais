#include <stdio.h>
#include <stdlib.h>  // atoi(); atof()
#include <math.h>
#include <locale.h>

int main(int argc, char* argv[])
{
	float x, x0, x1, y;

	setlocale(LC_ALL, "Portuguese");
	x0 = atof(argv[1]);
	x1 = atof(argv[2]);
	for (x = x0; x <= x1; x++)
	{
		y = sqrt(x);
		printf("%.1f\t%.3f\n", x, y);
	}
	
	return 0;
}
