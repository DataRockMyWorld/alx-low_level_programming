#include <unistd.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - writes the character c to stdout
 * @d: The character to print
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
