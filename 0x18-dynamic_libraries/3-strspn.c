#include "main.h"
#include <stddef.h>

/**
 * _strspn - writes the character c to stdout
 * @s: The character to print
 * @accept: The character to print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			else if  (accept[j + 1] == '\0')
			{
				return (count);
			}
		}
	}
	return (count);
}
