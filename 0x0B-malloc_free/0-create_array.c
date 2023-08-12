#include "main.h"
#include <stdlib.h>

/**
* create_array- a function that creates an array of chars
* @size: the size of the char variable
* @c: the character
 * Return: return 0
*/

char *create_array(unsigned int size, char c)
{
	int n;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		ptr[n] = 'a';
	return (ptr);
}
