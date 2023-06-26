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
	int i, cs, k, count = 0;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	cs = 0;
	k = count - 1;

	for (cs = 0; cs < count; cs++)
	{
		tmp[cs] = s[k];
		k--;
	
	}

	return (0);
}
