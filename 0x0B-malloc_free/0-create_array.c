#include "main.h"
#include "stdlib.h"

/**
 * create_array- fucntion to allocate memory
 * @size: size of the array
 * @c: array to allocate space for
 * Description: a function that creates an array of chars
 * and initialixes it with specific char
 * Return: return array or Null if malloc fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);

	/*check if size is initialized*/
	if (size == 0)
	{
		return (NULL);
	}

	/* check if malloc failed*/
	if (str == NULL)
	{
		return (NULL);
	}

	/*initialize array*/
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	/*return array*/
	return (str);
}
