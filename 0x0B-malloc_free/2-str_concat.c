#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - writes the character c to stdout
 * @s1: Thesize of memory
 * @s2: Second arguement
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, k, l, len_s1 = 0, len_s2 = 1;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		len_s1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		len_s2++;
	}
	concat = (char *)malloc(sizeof(char) * (len_s1 + len_s2));

	if (concat == NULL)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; k < len_s1; k++)
		{
			concat[k] = s1[k];
		}
		for (l = 0; l < len_s2; l++)
		{
			concat[len_s1 + l] = s2[l];
		}
		return (concat);
		free(concat);
	}
}
