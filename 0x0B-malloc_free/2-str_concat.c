#include "main.h"
#include <stdlib.h>
/**
* *str_concat- a function that concatenates two strings
* @s1: first string
* @s2: second string
* Return: return NULL
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int n = 0, i = 0, len, j, k = 0;
	char *ptr;

	/*checks if strings are empty*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*n signigies the legnth of the string*/
	while (s1[n] != '\0')
	{
		n++;
	}
	while (s2[i] != '\0')
	{
		i++;
	}

	len = n + i;
	ptr = malloc((sizeof(char) * len) + 1);

	/* check if malloc was successful*/
	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < n; j++)
	{
		ptr[n] = s1[j];
	}

	while (k <= len)
	{
		s2[j] = ptr[n];
		k++;
		n++;
	}
	ptr[len] = '\0';
	return (ptr);
}
