#include "main.h"
#include "stdlib.h"

/**
 * array_range- create array
 * @min: minimum parameter
 * @max: maximum parameter
 * Description: a function that creates an array of integers.
 * Return: returns a pointer
*/

int *array_range(int min, int max)
{
	int *ptr, diff, i;

	if (min > max)
	{
		return (NULL);
	}

	diff = (max - min) + 1;

	ptr = malloc(sizeof(int) * diff);

	if (ptr == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < diff; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
