#include <stdio.h>
/**
 * main - returns multiples of 3 & 5 less than 1024
 * @void: Fxn takes an input as a parameter
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	int sum = 0, i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}

	return (sum);
}
