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

	while (n <= 'z' && ch <= 'Z')
	{
		putchar(n);
		putchar(ch);
		n++;
	}

	putchar('\n');

	return (0);
}
