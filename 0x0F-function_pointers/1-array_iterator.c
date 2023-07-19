#include <unistd.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - writes a name stdout
 * @array: The character to print
 * @size: name of dog
 * @action: pointer to function
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL || size == 0)
		exit(1);

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
