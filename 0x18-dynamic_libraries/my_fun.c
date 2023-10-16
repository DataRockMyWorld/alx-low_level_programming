#include <stdio.h>
/**
 * add - Adds two integers
 * @a: An integer
 * @b: An integer
 *
 * Return: An Integer.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two integers
 * @a: An integer
 * @b: An integer
 *
 * Return: An Integer.
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - Multiplies two integers
 * @a: An integer
 * @b: An integer
 *
 * Return: An Integer.
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - Divides two integers
 * @a: An integer
 * @b: An integer
 *
 * Return: An Integer.
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}
/**
 * mod - Modulo of two integers
 * @a: An integer
 * @b: An integer
 *
 * Return: An Integer.
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a % b);
}
