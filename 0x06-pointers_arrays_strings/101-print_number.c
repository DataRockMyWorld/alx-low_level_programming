#include "main.h"

/**
 * print_number - writes the character c to stdout
 * @n: The character to print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_number(int n)
{
	unsigned int uni;

	uni = n;

	if (n < 0)
	{
		_putchar('-');
		uni = -n;
	}

	if (uni / 10 != 0)
	{
		print_number(uni / 10);
	}
	_putchar((uni % 10) + '0');
}
