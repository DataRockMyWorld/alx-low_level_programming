#include "main.h"

/**
 * *_strcpy - writs the character c to stdout
 * @dest: The character to print
 * @src: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < i; i++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
       
}
