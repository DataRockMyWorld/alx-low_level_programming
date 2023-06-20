#include "main.h"
/**
 * print_alphabet - writes the lower case  characters to stdout
 *
 * Description - print_alphabet prints lower case alphabet
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
