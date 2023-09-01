#include "stdlib.h"
#include "main.h"
#include <stdio.h>

/**
 * main- function to print name
 * @argc: number of arguments
 * @argv: array of stings
 * Description: a program that prints its name
 * Return: return name of program
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
