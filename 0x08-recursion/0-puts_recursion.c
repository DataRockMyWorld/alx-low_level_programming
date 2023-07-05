#include "main.h"

/**
 * _puts_recursion - Function that print strings, followed by a new line
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
		i++;
	}
}
