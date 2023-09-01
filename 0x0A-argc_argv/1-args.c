#include "stdlib.h"
#include "main.h"
#include <stdio.h>

/**
 * main- function to print arguments
 * @argc: number of arguments
 * @argv: array of stings
 * Description: a function that prints the number of arguments passed into is
 * Return: return number of args
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
