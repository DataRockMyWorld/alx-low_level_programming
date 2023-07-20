#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - Function that prints numbers
 *
 * @seperator: string to be printed between numbers
 * @n: number of args
 * Return: Always 0.
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);
		if (x == NULL)
			x = "(nil)";

		printf("%s", x);

		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(args);
}
