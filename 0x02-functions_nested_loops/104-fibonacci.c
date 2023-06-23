#include <stdio.h>
#include <math.h>
/**
 * main - first 50 fibonacci numbers
 * @void: Fxn takes an input as a parameter
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	int i, initial0s;
	unsigned long fib_1 = 1, fib_2 = 2, sum, max = 100000000;
	unsigned long f10 = 0, f20 = 0, sum0 = 0;

	for (i = 1; i <= 98; i++)
	{
		if (f10 > 0)
		{
			printf("%lu", f10);
		}
		initia10s = numLength(max) - 1 - numLength(fib_1);

		while (f10 > 0 && initia10s > 0)
		{
			printf("%d", 0);
			initia10s--;
		}

		printf("%lu", fib_1);

		sum = (fib_1 + fib_2) % max;
		sum0 = f10 + f20 + (fib_1 + fib_2) / max;
		fib_1 = fib_2;
		f10 = f20;
		fib_2 = sum;
		f20 = sum0;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
