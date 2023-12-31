#include "main.h"
#include <stddef.h>

/**
 * *_strchr - writes a function that locates character in a string
 * @s: The character to print
 * @c: The character to print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
