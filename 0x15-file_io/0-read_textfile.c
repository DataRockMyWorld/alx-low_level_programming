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
	int fd;
	char *content;
	ssize_t bytes_rd, w;

	content = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	bytes_rd = read(fd, content, letters);
	w = write(STDOUT_FILENO, content, bytes_rd);

	free(content);
	close(fd);
	return (w);
}
