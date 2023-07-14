#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print positive and negative numbers
 * Description: a program that prints random positive and
 * negative numbers
 *
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if(n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is zero ", n);
	}
	return (0);
}
