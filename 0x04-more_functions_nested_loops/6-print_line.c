#include "main.h"

/**
 * print_line - Print a line
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i < n + 1; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
