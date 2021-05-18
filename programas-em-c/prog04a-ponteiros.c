#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int v[4] = { 10, 20, 30, 40 };
	
	printf("%p\n", &v[0]);
	printf("%p\n", &v[1]);
	printf("%p\n", &v[2]);
	printf("%p\n", &v[3]);
	printf("%p\n", v);

	return 0;
}

