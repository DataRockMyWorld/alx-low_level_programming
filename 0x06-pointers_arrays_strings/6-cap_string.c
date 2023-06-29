#include "main.h"

/**
 * *cap_string - writes the character c to stdout
 * @c: The character to print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
	  if (c[i] == '\n' || c[i] == ' ' || c[i] == '\t' || c[i] == ',' || c[i] == ';'
		|| c[i] == ',' || c[i] == '?' || c[i] == '!' || c[i] == '"'
		|| c[i] == '{' || c[i] == '}' || c[i] == '(' || c[i] == ')' || c[i] == ' '
		|| i == 0)
		{
		  if ((c[i + 1] >= 'a') && (c[i + 1] <= 'z'))
			{
				c[i + 1] = c[i + 1] - 32;
			}
		  else
			{
				c[i + 1] = c [i + 1];
			}
		}
	}
	return (c);
}
