#include "main.h"
#include "stdlib.h"
/**
 * string_nconcat- fucntion to concatenate
 * @s1: string one
 * @s2: sting two
 * @n: number of bytes of s2 to be printed
 * Description: a function that concatenates two strings
 * Return: returns a pointer to memory allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len = 0, k, final = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/*get length of string*/
	while (s1[i] != '\0')
		i++;

	len = i + n + 1;

	concat = malloc(sizeof(char) * len);

	/*check if malloc was successful*/
	if (concat == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		concat[k] = s1[k];
	}

	for (k = 0; k < n; k++)
	{
		concat[i] = s2[final];
		final++;
		i++;
	}

	concat[len - 1] = '\0';
	return (concat);
}
