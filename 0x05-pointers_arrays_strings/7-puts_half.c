#include "main.h"

/**
 * puts_half - writs the character c to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{
	int i, j, n, count = 0;


	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	n = count / 2;

	if (count % 2 == 1)
	{
		n = ((count + 1) / 2);
	}

	for (j = n; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}


