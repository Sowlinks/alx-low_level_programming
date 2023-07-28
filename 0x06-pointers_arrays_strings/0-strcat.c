#include "main.h"

/**
 * _strcat- string concatenation
 * @dest: string to be concatenated into
 * @src: string to be added to another
 * Description: a function to concatenate two strings
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int n = 0;
	int i = 0;

	while (dest[n] != '\0')
	{
		n++;
	}

	while (src[i] != '\0')
	{
		dest[n] = src[i];
		i++;
		n++;
	}

	dest[i] = '\0';
	return (dest);
}
