#include "main.h"

/**
 * char *_strncat - writes the character c to stdout
 * @dest: The character to print
 * @src: The character to print
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k, count_1 = 0, count_2 = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		count_1++;
	}

	for (j = 0; dest[j] != '\0'; j++)
	{
		count_2++;
	}

	if (n < count_1)
	{
		for (k = 0; k < n; k++)
		{
			dest[count_2 + k] = src[k];
		}
	}
	else if (n >= count_1)
	{
		for (k = 0; k < n; k++)
		{
			dest[count_2 + k] = src[k];
		}
	}

	return (dest);
}
