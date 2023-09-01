#include "stdlib.h"
#include "main.h"
#include <stdio.h>

/**
 * main- adds arguments
 * @argc: number of arguments
 * @argv: array of stings
 * Description: a program that prints the minimum number of coins to make change
 * Return: return product of args
 */

int main(int argc, char *argv[])
{
	int r1, r2;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1])%25 == 0)
	{
		r1 = atoi(argv[1])/25;
		printf("%d\n", r1);
	}

	else
	{
		r2 = atoi(argv[1])/5;
		r1 += r2;
		printf("%d\n", r2);
	}
}
