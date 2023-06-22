#include "main.h"

/**
 * print_most_numbers - Multiplies two integers
 * @void: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + 48);
	}

	_putchar('\n');
}
