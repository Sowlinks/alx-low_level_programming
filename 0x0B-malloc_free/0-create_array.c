#include "main.h"
#include <stdlib.h>

/**
* create_array- a function that creates an array of chars
* @size: the size of the char variable
* @c: the character
 * Return: return a pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		ptr[n] = c;
	return (ptr);
}
