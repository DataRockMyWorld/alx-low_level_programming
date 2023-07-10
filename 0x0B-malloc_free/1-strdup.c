#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - writes the character c to stdout
 * @str: Thesize of memory
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, j, count = 0;

	for (j = 0;str[j] != '\0'; j++)
	{
		count++;
	}

	duplicate = (char *)malloc(sizeof(char) * count);

	if (duplicate == NULL || str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			duplicate[i] = str[i];
		}
		return (duplicate);
		free(duplicate);
	}
}
