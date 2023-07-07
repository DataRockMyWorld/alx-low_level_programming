#include "main.h"
/**
 * _islower - checks for lowercase and returns 1 when true
 * @c: Input type required
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
