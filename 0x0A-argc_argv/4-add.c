#include "stdlib.h"
#include "main.h"
#include <stdio.h>

/**
 * main- adds arguments
 * @argc: number of arguments
 * @argv: array of stings
 * Description: a program that prints the sum of arguments
 * Return: return product of args
 */

int main(int argc, char *argv[])
{
	int i, sum = 1;
	for (i = 1; i < argc; i++)
	{
		if ((atoi(argv[i]) < 0) !! ((atoi(argv[i]) > 9)))
		{
			printf("Error");
			return(1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
}
