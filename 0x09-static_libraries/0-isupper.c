#include "main.h"

/**
 *_isupper - checks if a  character is uppercase or noti:wq
 *@c: character to be tested
 *Description: a funtion to check if a character is uppercase or not
 *Return: 1 whether it is, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
