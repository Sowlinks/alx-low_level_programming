#include <stdio.h>

/**
 * main - print alphabets
 * Description: prints alphabet in lower case
 * and then in uppercase
 * Return: 0
 */

int main(void)
{
	char n;

	char ch;

	n = 'a';

	ch = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
