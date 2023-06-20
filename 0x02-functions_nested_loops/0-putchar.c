#include "main.h"
/**
 * main - Entry point
 *
 * Description - Program prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *c = "_putchar";
	int i;

	for (i = 0;c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
