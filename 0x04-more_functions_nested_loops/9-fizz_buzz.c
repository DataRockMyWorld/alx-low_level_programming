#include <stdio.h>

/**
 * main - fizz buzz
 * @void: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%i", i);
		}
		else
		{
			printf(" %i", i);
		}
	}
	printf("\n");
	return (0);
}
