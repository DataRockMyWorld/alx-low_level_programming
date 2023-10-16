/**
 * add - check the code
 * @a: int 1
 * @b: int 2
 * Return: Always EXIT_SUCCESS.
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - check the code
 * @a: int 1
 * @b: int 2
 * Return: Always EXIT_SUCCESS
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - mul two integers
 * @a: integer
 * @b: integer
 * Return: An integer
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - div two integers
 * @a: int
 * @b: int
 * Return: An integer
 */
int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}
/**
 * mod - modulo
 * @a: int
 * @b: int
 * Return: An integer
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
