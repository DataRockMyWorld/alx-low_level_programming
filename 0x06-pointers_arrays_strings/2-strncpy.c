#include "main.h"

/**
 * char *_strncpy - writes the character c to stdout
 * @dest: The character to print
 * @src: The character to print
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, k, len_src = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		len_src++;
	}
	if (n < len_src)
	{
		for (j = 0; j < n; j++)
		{
			dest[j] = src[j];
		}
	}
	else if (n >= len_src)
	{
		for (k = 0; k < n; k++)
		{
			dest[k] = src[k];
		}

	}

	return (dest);
}
