#include "main.h"

/**
 * _isdigit- checks for digit
 * @c: variable that contains the character to be checked
 * Description: a function that checks for a digit
 * Return: (0)
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
