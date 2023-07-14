#include <stdio.h>

/**
 * main - print alphabets
 * Description: prints alphabet in lower case in reverse
 * Return: 0
 */

int main(void)
{
	char ch;

	ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
