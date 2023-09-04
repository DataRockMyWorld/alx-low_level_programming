#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes, wrbyt;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	bytes = read(fd, buf, letters);
	if (bytes == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	wrbyt = write(STDOUT_FILENO, buf, bytes);
	if (wrbyt == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	if (bytes != wrbyt)
		return (0);

	return (bytes);
}
