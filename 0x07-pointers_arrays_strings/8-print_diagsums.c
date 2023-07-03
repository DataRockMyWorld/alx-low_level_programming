#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - writes the character c to stdout
 * @a: The character to print
 * @size: Character to print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int c = 0, d = 0;

	for (i = 0; i < size; i++)
	{
		c = c + a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		d = a[i] + d;
		a -= size;
	}

	printf("%d, %d\n", c, d);
}
