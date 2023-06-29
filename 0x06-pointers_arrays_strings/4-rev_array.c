#include "main.h"

/**
 * reverse_array - writes the character c to stdout
 * @a: The character to print
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int rev;

	j = n - 1;
	i = 0;
	while (i < j)
	{
		rev = a[i];
		a[i] = a[j];
		a[j] = rev;

		j--;
		i++;
	}
}
