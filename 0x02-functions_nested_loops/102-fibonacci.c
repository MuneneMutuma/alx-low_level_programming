#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0 always
 */
int main(void)
{
	long int a, b, tmp;
	int i;

	a = 1;
	b = 2;
	printf("%ld, %ld, ", a, b);
	for (i = 0; i < 48; i++)
	{
		tmp = a;
		a = b;
		b = a + tmp;

		printf("%ld", b);
		if (i != 47)
			printf(", ");
	}

	printf("\n");

	return (0);
}
