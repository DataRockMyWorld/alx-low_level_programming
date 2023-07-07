#include <stdio.h>

/**
 * main - writes the character c to stdout
 * @argc: The character to print
 * @argv: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	int i, count;

	(void)argv;

	count = 0;
	for (i = 0; i < argc; i++)
	{
		count++;
	}
	printf("%d\n", count - 1);

	return (0);
}
