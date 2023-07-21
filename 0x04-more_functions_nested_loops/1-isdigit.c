#include "main.h"

/**
 * _isdigit- checks for digit
 * @c: variable that contains the character to be checked
 * Description: a function that checks for a digit
 * Return: (0)
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
