#include "main.h"
#include <stdlib.h>

/**
* *_strdup;- a function that returns a pointer to
* a newly allocated space in memory
* @str: pointer containing the copied string
 * Return: return a pointer to a new string
*/

char *_strdup(char *str)
{
	unsigned int n = 0, i;
	char *ptr;

	/*checks if string is empty*/
	if (str == NULL)
		return (NULL);

	/*n signigies the legnth of the string*/
	while (str[n] != '\0')
	{
		n++;
	}

	ptr = malloc(sizeof(char) * (n + 1));

	/* check if malloc was successful*/
	if (ptr == NULL)
		return (NULL);

	/*copy sting into new string*/
	for (i = 0; i < n; i++)
	{
		ptr[i] = str[i];
	}

	/*add null character*/
	ptr[n] = '\0';
	return (ptr);
}
