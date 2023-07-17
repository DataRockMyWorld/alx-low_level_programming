#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @name: First member - name of dog
 * @age: Second member - age of dog
 * @owner: Third member - owner name
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
