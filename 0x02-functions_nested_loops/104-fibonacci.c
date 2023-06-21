#include <stdio.h>
/**
 * main - first 50 fibonacci numbers
 * @void: Fxn takes an input as a parameter
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	int i;
	unsigned long fib_1 = 0, fib_2 = 1, sum;

	for (i = 1; i < 99; i++)
	{
		sum = fib_1 + fib_2;
		printf("%lu", sum);

		fib_1 = fib_2;
		fib_2 = sum;

		if (i == 98)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
