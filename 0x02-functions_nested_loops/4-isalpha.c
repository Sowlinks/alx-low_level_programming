#include "main.h"

/**
 *_isalpha(int c)- checks if alphabet is in upper case
 *@ch: is the int that will be used for the argument of the function
 * Return: 0#
 */

int _isalpha(int ch)
{
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
