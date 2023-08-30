#include "main.h"

/**
 * _strlen_recursion- length of a string
 * @s: member s
 * Description: a function that prints the length of a given string
 * Return: returns the string length
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
