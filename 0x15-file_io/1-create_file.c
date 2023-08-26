#include "main.h"

/**
 * create_file - writes the character c to stdout
 * @filename: The file to read from
 * @text_content: Number of letters
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, text, len = 0, i = 0;

	if (text_content != NULL)
	{
		while (text_content[i] != 0)
		{
			len++;
			i++;
		}
	}

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	text = write(fd, text_content, len);

	if (fd == -1 || text == -1)
		return (-1);

	close(fd);
	return (1);
}