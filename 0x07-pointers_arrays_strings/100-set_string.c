#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char
 * @s: The character to print
 * @to: Character to print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
