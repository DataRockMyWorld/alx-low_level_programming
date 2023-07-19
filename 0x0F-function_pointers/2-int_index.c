#include <unistd.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - writes a name stdout
 * @array: The character to print
 * @size: name of dog
 * @cmp: pointer to function
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return(-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
