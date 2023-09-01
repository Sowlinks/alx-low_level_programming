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
	int i, product = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return(1);
	}
	for (i = 1; i < argc; i++)
	{
		product *= atoi(argv[i]);
	}
	printf("%d\n", product);
	return (0);
}
