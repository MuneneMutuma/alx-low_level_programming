#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long a, b, tmp, sum;

	a = 1;
	b = 2;
	sum = 0;
	while (b < 4000001)
	{
		if (b % 2 == 0)
			sum += b;
		tmp = a;
		a = b;
		b = a + tmp;
	}
	printf("%ld\n", sum);

	return(1);
}
