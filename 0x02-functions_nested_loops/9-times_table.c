#include "main.h"
/**
 * times_table - Prints every minute of jacks day
 * @void: Input type required
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int i = 0, j, x;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		for (j = 0; j < 10; j++)
		{
			x = i * j;
			if (j == 0)
			{
				_putchar(x + 48);
			}
			if (x < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + 48);
			}
			else if (x > 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((x / 10) + 48);
				_putchar((x % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
