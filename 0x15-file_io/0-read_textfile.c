#include "main.h"

/**
 * read_textfile - writes the character c to stdout
 * @filename: The file to read from
 * @letters: Number of letters
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i;
	char *content;
	ssize_t bytes_rd;

	content = malloc((sizeof(char)* letters) + 1);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	bytes_rd = read(fd, content, letters);
	if (bytes_rd == -1)
	{
		close(fd);
		return (0);
	}

	for (i = 0; i < bytes_rd; i++)
	{
		_putchar(content[i]);
	}
	close(fd);
	return (bytes_rd);
}
