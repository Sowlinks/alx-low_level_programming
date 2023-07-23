#include <stdio.h>

/**
 * main- fibonacci program
 * Description: a program that prints the first 50
 * fibonnaci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long long int a, b, rsum;
	int n;

	a = 1;

	b = 2;

	printf("%llu, %llu", a, b);
	for (n = 0; n <= 49; n++)
	{
		rsum = a + b;

		printf(", %llu", rsum);
		a = b;

		b = rsum;
	}
}
