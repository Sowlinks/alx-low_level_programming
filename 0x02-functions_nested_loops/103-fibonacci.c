#include <stdio.h>

/**
 * main- fibonacci program
 * Description: a program that prints the sum of the even numbers
 * of the fibonacci sequence
 * Return: 0
 */
int main(void)
{
	unsigned long a, b, rsum, sum;
	int n;

	a = 1;

	b = 2;

	sum = 0;

	for (n = 0; n <= 47; n++)
	{
		rsum = a + b;

		if (rsum % 2 == 0 && rsum < 4000000)
			sum = sum + rsum;

		a = b;

	b = rsum;

	}
	sum = sum + 2;

	printf("%lu", sum);
	printf("\n");
	return (0);
}
