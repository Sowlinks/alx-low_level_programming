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
			if (n % 5 == 0)
				printf(" FizzBuzz");
			else
				printf(" Fizz");
		else if (n % 5 == 0)
			if (n % 3 == 0)
				printf(" FizzBuzz");
			else
				printf(" Buzz");
		else
			printf(" %d", n);
	}

	return (0);
}
