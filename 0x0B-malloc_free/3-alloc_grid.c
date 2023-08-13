#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid- a function that allocates memory
 * for a 2 dimensional array
 * @width: the width of the array
 * @height: the height of the array
 * Return: a pointer
 */

int **alloc_grid(int width, int height)
{
	int i, n, **ptr;

	if (height < 1)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(ptr));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (n = 0; n < height; n++)
	{
		ptr[n] = malloc(width * sizeof(int));
		if (ptr[n] == NULL)
		{
			for (i = 0; i < n; i++)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
		for (i = 0; i < width; i++)
			ptr[n][i] = 0;
	}
	return (0);
}
