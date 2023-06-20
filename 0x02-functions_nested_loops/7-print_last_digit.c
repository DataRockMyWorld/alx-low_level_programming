#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number and returns 1 when true
 * @n: Input type required
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		n = -n;
	}
	ld = n % 10;

	if (ld < 0)
	{
		ld = -ld;
	}
	_putchar(ld + '0');

	return (ld);
}
