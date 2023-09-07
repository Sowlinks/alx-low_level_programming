#include "stdlib.h"
#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: parameter b
 * Descriiption: a function that allocates memory using malloc
 * Return: returns a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
