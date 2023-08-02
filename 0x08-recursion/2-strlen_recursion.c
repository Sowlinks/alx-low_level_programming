#include "main.h"

/**
 * _strlen- recursion function
 * @s: string to be checked
 * Description: a functiion that returns the legnth of a string
 * Return: 0;
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
