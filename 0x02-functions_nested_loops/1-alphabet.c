#include "main.h"
/**
 *main - prints lowercase
 *Description: prints the alphabet in lowercase
 *Return: 0
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
