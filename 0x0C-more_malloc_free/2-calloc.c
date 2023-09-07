#include "stdlib.h"
#include "main.h"

/**
 * _calloc - allocate memory
 * @nmemb: number of elements
 * @size: size of data type
 * Description: a function that allocates memory for an array, using malloc.
 * Return: retunrs a pointer
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index, i;
	void *memb;
	char *sample;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	i = nmemb * size;

	memb = malloc(nmemb * size);

	if (memb == NULL)
	{
		return (NULL);
	}

	sample = memb;

	while (sample[index] != '\0')
	{
		index++;
	}

	sample[index] = '\0';
	return (memb);
}
