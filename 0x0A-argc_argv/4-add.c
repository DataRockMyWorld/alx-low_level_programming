#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - writes the character c to stdout
 * @argc: The character to print
 * @argv: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	int i, count, s;

	count = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			s = atoi(argv[i]);
			if (s > 0)
			{
				count = count + s;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", count);
	}

	return (0);
}
