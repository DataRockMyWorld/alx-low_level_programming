#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - writes the character c to stdout
 * @argc: The character to print
 * @argv: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	int n, quarters, dimes, nickels, pennies, two_cent, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);

		if (n < 0)
		{
			printf("0\n");
		}
		else
		{
			quarters = n / 25;
			n = n - (quarters * 25);

			dimes = n / 10;
			n = n - (dimes * 10);

			nickels = n / 5;
			n = n - (nickels * 5);

			two_cent = n / 2;
			n = n - (two_cent * 2);

			pennies = n;
			n = n - pennies;

			cents = quarters + dimes + nickels + two_cent + pennies;
		}
		printf("%d\n", cents);
	}
	return (0);
}
