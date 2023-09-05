#include "main.h"
#include "stdlib.h"

/**
 * str_concat- fucntion to allocate memory
 * @s1: string one
 * @s2: sting two
 * Description: a function that concatenates two strings
 * Return: returns a pointer to the concatnated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, len = 0, j = 0, k, final;
	char *newstr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";
	/*get length of string*/
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	len = i + j + 1;

	newstr = malloc(sizeof(char) * len);
	/*check if malloc was successful*/
	if (newstr == NULL)
	{
		return (NULL);
	}

	for (k = 0; k <= i; k++)
	{
		newstr[k] = s1[k];
	}
	final = 0;

	for (k = i; k < len; k++)
	{
		newstr[k] = s2[final];
		final++;
	}
	return (newstr);
}
