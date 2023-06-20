#include "main.h"
/**
 * _isalpha - writes the result of an alphabet check to stdout
 *
 * c - is the parameter input
 *
 * Description - _isalpha and int c are alpha detection functions
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
