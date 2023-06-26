#include "main.h"

/**
 * rev_string - writs the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{
	int i, k, count = 0;
	char tmp = s[0];

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (k = 0; k < count; k++)
	{
		count--;
		tmp = s[k];
		s[k] = s[count];
		s[count] = tmp;
	}
}
