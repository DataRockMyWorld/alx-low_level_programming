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
	int y;

	y = (n % 10) + 48;
	_putchar(y);
	return (0);
}
