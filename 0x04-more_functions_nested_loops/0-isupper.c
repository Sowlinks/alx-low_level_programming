#include "main.h"
/**
 * _isupper- checks for upper case
 * @c: variable for the character to be checked
 * Description: a function that checks if a character is in uppercae
 * Return: 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
