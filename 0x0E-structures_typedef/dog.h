#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure for dog name age and owner
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
