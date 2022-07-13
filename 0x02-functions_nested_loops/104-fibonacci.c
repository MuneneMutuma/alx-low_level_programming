#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0 always
 */
int main(void)
{
	unsigned long int a, b, tmp;
	int i;

	for (a = 1, b = 2, i = 0; i < 95; i++)
	{
		tmp = a;
		a = b;
		b = a + tmp;

		printf("%d: %ld\n", i + 3, b);
		if (i != 47)
			printf(", ");
	}

	printf("\n");

	return (0);
}
