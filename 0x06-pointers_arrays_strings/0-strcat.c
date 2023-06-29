#include "main.h"

/**
 * char *_strcat - writes the character c to stdout
 * @dest: The character to print
  *@src: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k, count_1 = 0, count_2 = 0;
	char **ptr_dest = &dest;

	for (i = 0; src[i] != '\0'; i++)
	{
		count_1++;
	}

	for (j = 0; dest[i] != '\0'; j++)
	{
		count_2++;
	}

	count_1 = count_1 + 1;

	for (k = 0; k <= count_1; k++)
	{
		dest[count_2 + i] = src[i];
	}

	return (*ptr_dest);
}
