#include <stdio.h>

/**
 * main - print alphabets
 * Description: prints alphabet in lower case except q and e
 * Return: 0
 */

int main(void)
{
	char n;

	n = 'a';

	while (n != 'q' || 'e')
	{
	putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
