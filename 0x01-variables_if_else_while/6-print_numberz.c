#include <stdio.h>

/**
 * main - print single digits
 * Description: prints single digit of base 10 numbers
 * Return: 0
 */

int main(void)
{
	int n = 0;

	while (n <= 9)

	{

		putchar('0' + n);

		n++;

	}

	putchar('\n');

	return (0);

}

