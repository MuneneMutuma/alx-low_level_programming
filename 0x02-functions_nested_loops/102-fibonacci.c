#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long int a, b, tmp;
	int i;

	for (a = 1, b = 2, i = 0; i < 48; i++)
	{
		tmp = a;
		a = b;
		b = a + tmp;

		printf("%ld", b);
		if (i != 47)
			printf(", ");	
	}

	printf("\n");

	return (1);
}
