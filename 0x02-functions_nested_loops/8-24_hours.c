#include "main.h"
/**
 * jack_bauer - Prints every minute of jacks day
 * @void: Input type required
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
	int i = 0, j;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(':');
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar('\n');
			j++;
		}
		i++;
	}
}
