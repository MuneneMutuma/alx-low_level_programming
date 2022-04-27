#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	struct dog my_dog, test_dog, final_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	print_dog(&my_dog);

	test_dog.name = "";
	test_dog.age = 0;
	test_dog.owner = '\0';
	print_dog(&test_dog);

	print_dog(&final_dog);
	return (0);
}
