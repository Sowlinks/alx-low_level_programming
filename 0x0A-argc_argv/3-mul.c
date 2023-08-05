#include <stdio.h>
#include <stdlib.h>

/**
 * main- multiplies two numbers
 * @argc: count of arguments
 * @argv: strings passed to the program
 * Description: a program that multiplies two numbers and
 * prints its output
 * Return: always return 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int result, x, y;

	if (argc < 3)
		printf("%s\n", "Error");
		return (1);

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;

	printf("%d\n", result);
	return (0);
}
