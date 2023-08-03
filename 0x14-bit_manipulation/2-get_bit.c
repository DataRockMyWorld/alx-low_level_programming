
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_bit - converts binary to unsigned int
 * @n: The character to print
 * @index: index of array
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bin, i;
	unsigned int *array = malloc(sizeof(unsigned int) * 64);

	if (array == NULL)
		return (-1);

	i = 0;
	while (n != 0)
	{
		bin = n % 2;
		n = n / 2;
		array[i] = bin;
		i++;
	}

	if (index >= i)
	{
		free(array);
		return (-1);
	}

	return (array[index]);
}
