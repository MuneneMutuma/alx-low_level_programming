#include <stdio.h>

int main(void)
{
	int i, sum;

	for (i = 0, sum = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}

	printf("%d\n", sum);
	return (1);
}
