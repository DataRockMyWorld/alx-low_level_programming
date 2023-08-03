#include "main.h"
#include <stdlib.h>

/**
 * expo - Exponential function
 * @x: The character to print
 * @y: power to be raised to
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int expo(unsigned int x, unsigned int y)
{
	unsigned int i, mul;

	mul = x;

	if (y == 0)
		return (1);

	for (i = 1; i < y; i++)
	{
		mul = mul * x;
	}
	return (mul);
}


/**
 * binary_to_uint - converts binary to unsigned int
 * @b: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, k, total;
	int i, j, len;

	len = 0;
	k = 0;
	total = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		len++;

	for (j = len - 1; j != -1; j--)
	{
		if (b[j] != '1' && b[j] != '0')
			return (0);

		num = b[j] - '0';
		num = num * expo(2, k);
		total = total + num;
		k++;
	}
	return (total);
}
