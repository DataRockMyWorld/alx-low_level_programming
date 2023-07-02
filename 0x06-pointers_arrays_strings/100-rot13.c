#include "main.h"

/**
 * *rot13 - writes the character c to stdout
 * @c: The character to print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *rot13(char *c)
{
	int i, j;

	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *al_t = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == alpha[j])
			{
				c[i] = al_t[j];
				break;
			}
		}
	}
	return (c);
}
