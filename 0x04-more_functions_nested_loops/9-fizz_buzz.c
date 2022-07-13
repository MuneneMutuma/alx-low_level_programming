#include <stdio.h>

/**
 * main - prints numbers less than 100
 *	  but FIZZ for multiples of 3
 *	  and BUZZ for multiples of 5
 *	  and FIZZBUZZ for both multiples of 3 and 5
 *
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}

	printf("\n");

	return (0);
}
