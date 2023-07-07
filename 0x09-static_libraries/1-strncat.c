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
	int i, j, len_dest = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len_dest++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[len_dest] = src[j];
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
