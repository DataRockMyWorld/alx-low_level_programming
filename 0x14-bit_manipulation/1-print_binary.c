#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_binary - converts binary to unsigned int
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_binary(unsigned long int n)
{
	int nob = sizeof(unsigned long int) * 8;
	char digit;
	int ms_bit, i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	ms_bit = nob - 1;
	while ((n & (1UL << ms_bit)) == 0)
		ms_bit--;

	for (i = ms_bit; i >= 0; i--)
	{
		digit = (n & (1UL << i)) ? '1' : '0';
		_putchar(digit);
	}
}
