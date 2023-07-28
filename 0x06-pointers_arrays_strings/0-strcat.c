#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat- string concatenation
 * @dest: string to be concatenated into
 * @src: string to be added to another
 * Description: a function to concatenate two strings
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int n;

	for (n = 0; n < strlen(src); n++)
	{
		printf("%c", src[n]);
		for (n = 0; n < strlen(dest); n++)
		{
			printf("%c", dest[n]);
		}
	}
}
