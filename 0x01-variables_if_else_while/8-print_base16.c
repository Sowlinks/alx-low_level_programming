#include <stdio.h>

/**
 * main - print all numbers of base 16
 * Description: prints all numbers of base 16
 * Return: 0
 */

int main(void)
{
	int n = 0;

	char ch = 'a';

	while (n <= 15)

	{

		putchar('0' + n);

		n++;

	}

	while (ch <= 'f')

	{
		putchar(ch);

		ch++;

	}

	putchar('\n');

	return (0);

}
