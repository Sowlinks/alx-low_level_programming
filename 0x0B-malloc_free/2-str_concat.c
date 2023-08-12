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
	unsigned int num1 = 0, num2 = 0, len, j = 0, k = 0;
	char *ptr;

	/*checks if strings are empty*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*n signigies the legnth of the string*/
	while (s1[num1] != '\0')
	{
		num1++;
	}
	while (s2[num2] != '\0')
	{
		num2++;
	}

	len = num1 + num2;
	ptr = malloc((sizeof(char) * len) + 1);

	/* check if malloc was successful*/
	if (ptr == NULL)
		return (NULL);

	while (j < num1)
	{
		ptr[j] = s1[j];
		j++;
	}

	while (k <= len)
	{
		ptr[j] = s2[k];
		j++;
		k++;
	}
	return (ptr);
}
