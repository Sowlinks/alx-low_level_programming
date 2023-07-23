#include <stdio.h>

/**
 * main- fibonacci program
 * Description: a function that prints the first 98 fibonnaci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long a, b, rsum;
	int n;

	a = 1;

	b = 2;

	printf("%lu, %lu", a, b);
	for (n = 0; n <= 95; n++)
	{
		rsum = a + b;

		printf(", %lu", rsum);

		a = b;

		b = rsum;
	}
	printf("\n");
	return (0);
}
