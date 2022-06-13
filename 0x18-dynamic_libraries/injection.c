#include <stdlib.h>

int arr[6] = {1, 1, 1, 1, 1, 1};
int i = 0;
int rand()
{
	int ans = arr[i];
	i++;
	return (ans);
}
