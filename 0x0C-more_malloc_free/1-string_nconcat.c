#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - writes the character c to stdout
 * @s1: Thesize of memory
 * @s2: second string
 * @n: length to concactenate
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k, l;
	unsigned int len_s1 = 0, len_s2 = 1;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	for (i = 0; s1[i] != '\0'; i++)
	{
		len_s1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		len_s2++;
	}

	if (n < len_s2)
		ptr = malloc(sizeof(char) * (len_s1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (len_s1 + len_s2));

	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < len_s1; k++)
	{
		ptr[k] = s1[k];
	}
	for (l = 0; l < n; l++)
	{
		ptr[len_s1 + l] = s2[l];
	}
	ptr[len_s1 + n] = '\0';
	return (ptr);
}
