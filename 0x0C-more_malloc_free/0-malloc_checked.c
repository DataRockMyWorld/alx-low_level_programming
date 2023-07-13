#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - writes the character c to stdout
 * @b: Thesize of memory
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
