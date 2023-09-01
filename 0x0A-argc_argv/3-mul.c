#include "stdlib.h"
#include "main.h"
#include <stdio.h>

/**
 * main- product of arguments
 * @argc: number of arguments
 * @argv: array of stings
 * Description: a program that prints the product of arguments
 * Return: return product of args
 */

int main(int argc, char *argv[])
{
	int i, product, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return(1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);
	return (0);
}
