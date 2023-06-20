#include "main.h"
/**
 * _abs - checks for sign and returns 1 when true
 * @int: Input type required
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		_putchar('n');
	}
	else if (n < 0)
	{
		_putchar('(n * -1)');
	}
	return (0);
}
