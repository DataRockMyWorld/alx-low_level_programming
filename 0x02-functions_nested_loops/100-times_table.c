#include "main.h"
/**
 * print_times_table - Prints n times table
 * @n: Fxn takes an input as a parameter
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_times_table(int n)
{
	int i, j, x;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			j = 0;
			for (j = 0; j < n + 1; j++)
			{
				x = i * j;
				if (j == 0)
				{
					_putchar(x + '0');
				} else if (x < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(x + '0');
				} else if (x >= 10 && x < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				} else if (x >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((x / 100) + '0');
					_putchar(((x / 10) % 10) + '0');
					_putchar((x % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}

}
