#include "main.h"
#include "stdlib.h"

/**
 * _strdup- fucntion to allocate memory
 * @str: string to be duplicated
 * Description: a that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * Return: returns a pointer to duplicated string
 */

char *_strdup(char *str)
{
	unsigned int i = 0, len = 0, j;
	char *newstr;

	/*get length of string*/
	while (str[i] != '\0')
	{
		i++;
	}
	len = i + 1;

	/* check if str is null*/
	if (str == NULL)
	{
		return (NULL);
	}

	/*allocate mememory for new string*/
	newstr = malloc(sizeof(char) * len);

	/*make new string point to string*/
	for (j = 0; j <= i; j++)
	{
		newstr[j] = str[j];
	}
	newstr[i] = '\0';

	/*check if malloc was successful*/
	if (newstr == NULL)
	{
		return (NULL);
	}
	return (newstr);
}
