#include <stdio.h>

int f1(char *hello)
{
	printf("From f1: %p\n", (void*)hello);
	hello[0] = 'X'; // Alteração do 'H' para 'X' no vetor hello da função main()

	return 0;
}

int main()
{
	char hello[] = "Hello World";

	// printf("%c\n", *hello); // ERRADO!
	printf("%p\n", (void *)hello);
	f1(hello);
	printf("%s\n", hello); // Vetor alterado pela função f1

	return 0;
}
