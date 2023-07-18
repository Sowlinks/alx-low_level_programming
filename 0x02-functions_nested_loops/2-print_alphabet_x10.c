#include "main.h"

/**
 *print_alphabet_x10 - function to print lowercase alphabet
 *Description: prints the alphabet 10 times
 *Return: 0
 */

void print_alphabetx10(void)
{
	int ch, n;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		for (n = 0; n < 10; n++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	}
}
