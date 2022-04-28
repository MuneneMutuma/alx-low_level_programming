#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a_dog;

	a_dog = malloc(sizeof(dog_t));

	if (!name || !age || !owner)
		return (0);
	a_dog->name = name;
	a_dog->age = age;
	a_dog->owner = owner;

	return (a_dog);
}
