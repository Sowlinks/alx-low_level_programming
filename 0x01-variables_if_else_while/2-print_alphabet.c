#include <stdio.h>

/**
 * main - print alphabets
 * Description: prints alphabet in lower case
 * Return: 0
 */

int main(void)
{
	char n;

	n = 'a';

	while (n <= 'z')
	{
		putchar("%c\n"n);
		n++;
	}


	return (0);
}
