#include <stdio.h>
/**
 * main- fizz buzz function
 * Description: a fuction that prints 1 - 100 using the fizz
 * guzz principle
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 3 == 0)
			printf(" Fizz");
		else if (n % 5 == 0)
			printf(" Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf(" FizzBuzz");
		else
			printf(" %d", n);
	}

	printf("\n");
	return (0);
}
