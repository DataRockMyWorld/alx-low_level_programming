#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints every minute of jacks day
 * @n: Input type required
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else if (i == 98)
			{
				printf("%d\n", i);
			}
		}
	}
	else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else if (i == 98)
			{
				printf("%d\n", i);
			}
		}
	}
}
