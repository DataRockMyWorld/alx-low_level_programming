#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int dig1 = 0, dig2;

	while (dig1 <= 99)
	{
		dig2 = 0;
		while (dig2 <= 99)
		{
			if (dig1 != dig2 && dig1 < dig2)
			{
				putchar((dig1 / 10) + 48);
				putchar((dig1 % 10) + 48);
				putchar(' ');
				putchar((dig2 / 10) + 48);
				putchar((dig2 % 10) + 48);
				if (dig1 + dig2 != 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
			dig2++;
		}
		dig1++;
	}
	putchar('\n');
	return (0);
}
