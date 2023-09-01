#include "stdlib.h"
#include "main.h"
#include <stdio.h>

/**
 * main- print all arguments
 * @argc: number of arguments
 * @argv: array of stings
 * Description: a program that prints all arguments it receives
 * Return: return number of args
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
