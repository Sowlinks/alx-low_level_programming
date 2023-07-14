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

	while (ch != 'q' && ch != 'e')
	{
	putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
