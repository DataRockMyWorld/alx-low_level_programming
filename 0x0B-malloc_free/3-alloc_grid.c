#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - writes the character c to stdout
 * @width: Thesize of memory
 * @height: The height of the array
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ptr_2d;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr_2d = malloc(sizeof(int *) *  height);

	if (ptr_2d == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		ptr_2d[i] = malloc(sizeof(int) * width);

		if (ptr_2d[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(ptr_2d[i]);
			}
			free(ptr_2d);

			return (NULL);
		}
		i++;
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr_2d[i][j] = 0;
		}
	}
	return (ptr_2d);
}
