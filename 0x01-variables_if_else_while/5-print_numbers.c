#include <stdio.h>

/**
 * main - print single digits
 * Description: prints single digit of base 10 numbers
 * Return: 0
 */

int main(void)
{
	int n;

	n = 0;

	while (n <= '9')
	{

		printf("%d", n);

		n++;

	}

	printf("\n");

	return (0);

}
