#include "main.h"

/**
 *_islower- a function to check for lower case
 *@c: checks for case of alphabet
 *Return: 0
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
