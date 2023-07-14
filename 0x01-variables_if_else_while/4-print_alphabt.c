#include <stdio.h>

/**
 * main - print alphabets
 * Description: prints alphabet in lower case except q and e
 * Return: 0
 */

int main(void)
{
	char ch;

	ch = 'a';

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
	}

	putchar('\n');

	return (0);
}
