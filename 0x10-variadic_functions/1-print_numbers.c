#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - Function that prints numbers
 *
 * @seperator: string to be printed between numbers
 * @n: number of args
 * Return: Always 0.
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list args;

	if (seperator == NULL)
		exit(0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (i == (n - 1))
			printf("%s%d", seperator, x);
		else
		{
			printf("%d%s ", x, seperator);
		}
	}
	printf("\n");
}
